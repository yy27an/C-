#include <stdio.h>
int main(){
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	int (*p)[4],i,j;
	p=a;		//p指向二维数组的0行首地址
	printf("please enter row and colum:\n");
	scanf("%d,%d",&i,&j);
	printf("a[%d][%d]=%d\n",i,j,*(*(p+i)+j));
	return 0;
}

#include <stdio.h>
int main(){
	int a[4]={1,3,5,7};
	int (*p)[4];	
	p=&a;			//p指向一维数组，不能写成p=a，这样的话 (*p)[3]指向的是行中序号为3的地址
	printf("%d\n",(*p)[3]);
	return 0;
}
