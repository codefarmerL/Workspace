#!/bin/bash

#program
#	test if function

#2017/4/10

read -p "please input [Y/N]" flag

if [ "$flag" == "Y" ] || [ "$flag" == "y" ];then
	echo "OK,continue"
elif [ "$flag" == "N" ] || [ "$flag" == "n" ];then
	echo "Oh,interrupt"
else
	echo "input error"
fi
