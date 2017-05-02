#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t pid;
	pid = getpid();
	printf("%d",pid);
	return 0;
}
