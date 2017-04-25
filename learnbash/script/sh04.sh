#!/bin/bash

#program
#	use function

#2017/4/10

function use(){
	echo "your choice is $1"
}

read -p "please input number(1-3):" num

case $num in
	"1")
		use a
		;;
	"2")
		use b
		;;
	"3")
		use c
		;;
	*)
		echo "input error"
esac
