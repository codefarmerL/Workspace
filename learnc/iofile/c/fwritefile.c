#include <stdio.h>

#define path "/home/lzy/workspace/learnc/iofile/testtxt/test3.txt"

int main(){
	char buf[10]="1234567890";
	FILE *fp;
	fp = fopen(path,"a");
	fputs(buf,fp);
	return 0;
}
