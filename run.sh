#!/bin/bash

# compile 
g++ -o FastIO FastIO.cpp
g++ -o SlowIO SlowIO.cpp 

# time 
time ./FastIO < ca-HepPh.txt
time ./SlowIO < ca-HepPh.txt 
 
