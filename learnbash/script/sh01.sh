#!/bin/bash

#program:
#        test1

#2017/4/10

echo "please input two num!"

read -p "first number:" firstnum

read -p "second number:" secondnum

sum=$(($firstnum*$secondnum))

echo "$firstnum X $secondnum = $sum"
