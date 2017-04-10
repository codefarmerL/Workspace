#!/bin/bash

#program
#	test case function

#2017/4/10


read -p "please input a word:" word

case $word in
	"hello")
		echo "hello,how are you"
		;;
	"sorry")
		echo "what happend?"
		;;
	*)
		echo "please input hello or sorry"
		;;
esac
