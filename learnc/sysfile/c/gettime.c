#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	time_t t;
	struct tm *tmp;
	char buf[64];
	time(&t);
	tmp = localtime(&t);
	strftime(buf,64,"time and date: %r,%a %b %d %Y",tmp);
	printf("%s\n",buf);
	return 0;
}
