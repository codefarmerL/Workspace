#include <stdio.h>

#define path "/home/lzy/workspace/learnc/iofile/testtxt/test1.txt"

int main(){
	FILE *fp;
	char buf[4096];
	fp = fopen(path,"r");
	while(fgets(buf,4096,fp)!=NULL)
		printf("%s",buf);
	return 0;
}
