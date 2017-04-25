#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define path "/home/lzy/workspace/learnc/iofile/testtxt/test2.txt"

int main(){
	char buf[10] = "1234567890";
	int fd;
	fd = open(path,O_RDWR|O_CREAT);
	write(fd,buf,10);
	return 0;
}
