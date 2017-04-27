#include <pwd.h>
#include <stdio.h>

int main(){
	struct passwd *ptr;
	ptr = getpwuid(0);
	printf("%s",ptr->pw_name);
	return 0;
}
