//指向函数的指针变量
//#include <stdio.h>
//int main(){
//	int max(int,int);
//	int (*p)(int,int);
//	int a,b,c;
//	p=max;			//函数max的入口地址
//	printf("please enter a and b:");
//	scanf("%d,%d",&a,&b);
//	c=(*p)(a,b);
//	printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
//	return 0;
//}
//
//int max(int x, int y){
//	int z;
//	if(x>y) z=x;
//	else z=y;
//	return z;
//}

//#include <stdio.h>
//int main(){
//	int max(int,int);
//	int min(int x,int y);
//	int (*p)(int,int);
//	int a,b,c,n;
//	printf("please enter a and b:\n");
//	scanf("%d,%d",&a,&b);
//	printf("please choose 1 or 2\n:");
//	scanf("%d",&n);
//	if(n==1) p=max;
//	else if(n==2) p=min;
//	else printf("输入有误。");
//	c=(*p)(a,b);
//	printf("a=%d,b=%d\n",a,b);
//	if(n==1) printf("max=%d\n",c);
//	else printf("min=%d\n",c);
//	return 0;
//}
//int max(int x,int y){return (x>y?x:y);}
//int min(int x,int y){return (x<y?x:y);}
