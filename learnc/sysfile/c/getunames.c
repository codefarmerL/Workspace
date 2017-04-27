#include <sys/utsname.h>
#include <stdio.h>

int main(void){
	struct utsname unam;
	uname(&unam);
	printf("%s\n%s\n%s\n%s\n%s\n",unam.sysname,unam.nodename,unam.release,unam.version,unam.machine);
}
