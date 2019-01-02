#!/bin/sh

# 2> /dev/null for ignoring the error message
# $? to check the cmd succeed status
# return 1 to discard the current tc.c

m_timeout=10

m_cs=0 # CSmith
m_tc=0 # TestCase
m_wo=0 # gcc -w -O3
m_to=0 # gtimeout
m_df=0 # diff

function remove_temp_files() {
    rm -rf *.c *.o *.txt *.info 2> /dev/null
}

function save_tc() {
    src="tc.c"
    dist="save_tc/$1_$(gdate +%Y%m%d%H%M%S%N).c"
    cp -- $src $dist
}

function exec_csmith_default() {
    # create csmith test case with ~/bin/csmith230-bin/bin/csmith
    csmith.sh > tc.c 2> /dev/null
    if [ $? -ne 0 ]
        then
            m_cs=$((m_cs+1))
            return 1
    fi

    # count number of test case
    m_tc=$((m_tc+1))

    # run with default /usr/include/c++/4.2.1
    gcc -w -O3 tc.c -o out421.o -I ~/bin/csmith230-bin/include/csmith-2.3.0 2> /dev/null
    if [ $? -ne 0 ]
        then
            m_wo=$((m_wo+1))
            save_tc "wo"
            return 1
    fi
    gtimeout $m_timeout ./out421.o > out421.txt
    if [ $? -ne 0 ]
        then
            m_to=$((m_to+1))
            save_tc "to"
            return 1
    fi

    # run with ~/bin/gcc480-bin/bin
    ~/bin/gcc480-bin/bin/gcc -w -O3 tc.c -o out480.o -I ~/bin/csmith230-bin/include/csmith-2.3.0 2> /dev/null
    if [ $? -ne 0 ]
        then
            m_wo=$((m_wo+1))
            save_tc "wo"
            return 1
    fi
    gtimeout $m_timeout ./out480.o > out480.txt
    if [ $? -ne 0 ]
        then
            m_to=$((m_to+1))
            save_tc "to"
            return 1
    fi

    # compare output with diff
    diff out421.txt out480.txt
    if [ $? -ne 0 ]
        then
            m_df=$((m_df+1))
            save_tc "df"
            return 1
    fi
}

remove_temp_files
START=$(date +%s)
limit=1*60*60*6
while [ $(($(date +%s) - limit)) -lt $START ]; do
    exec_csmith_default
    echo m_cs=$m_cs m_tc=$m_tc m_wo=$m_wo m_to=$m_to m_df=$m_df
    remove_temp_files
done
