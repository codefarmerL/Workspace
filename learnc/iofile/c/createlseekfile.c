#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main(void){
	int fd;
	fd = open("/home/lzy/workspace/learnc/iofile/testtxt/holefile.txt",O_RDWR|O_CREAT);
	if(fd<0)
		printf("open error");
	int n = write(fd,buf1,10);
	if(n!=10)
		printf("write1 error");
	int lsk = lseek(fd,16384,SEEK_SET);
	if(lsk == -1)
		printf("lseek error");
	int m = write(fd,buf2,10);
	if(m!=10)
		printf("write2 error");
	exit(0);
}
