#!/bin/bash

g++ matrix.cpp -o m -DDEBUG
./m

g++ matrix.cpp -o m1 -DDEBUG -O1
./m1
g++ matrix.cpp -o m2 -DDEBUG -O2
./m2
g++ matrix.cpp -o m3 -DDEBUG -O3
./m3
