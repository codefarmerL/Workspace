#include <stdio.h>
#include <shadow.h>

int main(void){
	struct spwd *ptr;
	ptr = getspnam("lzy");
	printf("%s",ptr->sp_pwdp);
}
