#include "apue.h"

int main(int argc,char *agrv[]){
	int i;
	char **ptr;
	extern char **environ;
	for(ptr = environ; *ptr != 0; ptr++)
		printf("%s\n",*ptr);
	return 0;
}
