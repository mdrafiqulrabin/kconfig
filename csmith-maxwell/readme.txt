[CSmith]

    //create CSmith C program
    $cd ~/bin/csmith-bin/bin
    $./csmith

    //create CSmith C program
    $/Users/mdrafiqulrabin/bin/csmith-bin/bin/csmith

    //compile CSmith C program
    $ gcc -c -w -O3 sample_csmith.c -I/Users/mdrafiqulrabin/bin/csmith-bin/include/csmith-2.3.0

[C-Reduce]

    #Step-01: [csmith_bug1.sh ]

    #!/bin/bash
    gcc -c -w csmith_bug1.c &&\
    ! gcc -c -w -O3 csmith_bug1.c

    #Step-02: [$]

    $ chmod u+x csmith_bug1.sh
    $ ./csmith_bug1.sh ; echo $?
    0

    #Step-03: [$]

    $ creduce ./csmith_bug1.sh csmith_bug1.c
