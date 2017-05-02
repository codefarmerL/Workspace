#include <stdio.h>
#include <unistd.h>

int globvar = 6;
char buf[] = "a write to stdout";

int main(){
	int var;
	pid_t pid;
	var = 88;
	write(STDOUT_FILENO,buf,sizeof(buf)-1);
	printf("before fork\n");
	if((pid = fork())==0){
		globvar++;
		var++;
	}
	else
		sleep(2);
	printf("pid=%ld,uid=%ld,globvar=%d,var=%d\n",(long)getpid(),(long)getuid(),globvar,var);
	return 0;
}
