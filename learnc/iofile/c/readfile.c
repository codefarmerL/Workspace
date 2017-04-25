#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define path "/home/lzy/workspace/learnc/iofile/testtxt/test1.txt"

int main(){
	char buf[4096];
	int  fd;
	fd = open(path,O_RDONLY);
	read(fd,buf,4096);
	printf("%s",buf);
	return 0;
}
