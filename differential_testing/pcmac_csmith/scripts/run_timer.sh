#!/bin/sh

START=$(date +%s)
limit=2
while [ $(($(date +%s) - limit)) -lt $START ]; do
    echo $(date +%s)
done
