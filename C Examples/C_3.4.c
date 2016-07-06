#include <stdio.h>
int main(){
	int f1=1,f2=1,f3;
	int i;
	printf("%12d\n%12d\n",f1,f2);
	for(i=1;i<=12;i++){
		f3=f1+f2;
		printf("%12d\n",f3);
		f1=f2;
		f2=f3;
	}
	return 0;
}
//此时只需要两个变量即可
#include <stdio.h>
int main(){
	int f1=1,f2=1;
	int i;
	for(i=1;i<=20;i++){
		printf("%12d%12d",f1,f2);
		if(i%2==0) printf("\n");
		f1=f1+f2;
		f2=f2+f1;
	}
}
