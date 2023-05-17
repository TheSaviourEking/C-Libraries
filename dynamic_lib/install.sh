#!/bin/bash

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./lib
./math && ./math2
# ./math2
echo $LD_LIBRARY_PATH
