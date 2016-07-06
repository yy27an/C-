#include <stdio.h>
int main(){
	int a=1,b=2;
	char *format="a=%d,b=%d\n";
	printf(format,a,b);

//	char format[]="a=%d,b=%d\n";
//	printf(format,a,b);

	return 0;
}
