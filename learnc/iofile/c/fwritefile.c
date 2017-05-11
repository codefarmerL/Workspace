#include <stdio.h>

#define path "/home/lzy/workspace/learnc/iofile/testtxt/test3.txt"

int main(){
	char c;
	char buf[4096];
	FILE *fp;
	int i=0;
	while((c=getc(stdin))!='\n'){
		buf[i]=c;
		i++;
	}
	fp = fopen(path,"w+");
	if(fputs(buf,fp)==EOF)
		printf("out error");
	else
		printf("write success\n");
	return 0;
}
