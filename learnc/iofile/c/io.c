#include <apue.h>

int main(void){
	int n;
	char buf[4096];
	while((n=read(STDIN_FILENO,buf,4096))>0){
		if(write(STDOUT_FILENO,buf,n)!=n)
			printf("write error");
	}
	return 0;
}
