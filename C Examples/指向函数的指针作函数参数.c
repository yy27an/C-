#include <stdio.h>
//#include <stdafx.h>
int main(){
//	int (*p)(int,int);
//	double *p;
//	p=(double *)malloc(sizeof(double));
	void fun(int x,int y,int (*p)(int,int));
	int max(int,int);
	int min(int,int);
	int add(int,int);
	int a=34,b=-21,n=0;
	printf("please choose 1, 2 or 3:\n");
	scanf("%d",n);
//	switch(n){
//	case 1: fun(a,b,max); break;
//	case 2: fun(a,b,min); break;
//	case 3: fun(a,b,add); break;
//	default: printf("The enter data error!\n");
//	}
	if(n==1) fun(a,b,max);
	else if(n==2) fun(a,b,min);
	else if(n==3) fun(a,b,add);
	else printf("The enter data error!\n");
	return 0;
}
void fun(int x,int y,int (*p)(int,int)){
	int result;
	result=(*p)(x,y);
	printf("%d\n",result);
	
}
int max(int x,int y){printf("max="); return (x>y?x:y);}
int min(int x,int y){printf("min="); return (x<y?x:y);}
int add(int x,int y){printf("add="); return (x+y);}
