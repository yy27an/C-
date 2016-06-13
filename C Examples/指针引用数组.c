//a[i]==*(a+i);p=a,*p,*(p+i)
//下标法
//#include <stdio.h>
//int main(){
//	int a[5];
//	int i;
//	printf("please enter 5 integer numbers:\n");
//	for(i=0;i<5;i++){scanf("%d",&a[i]);}
//	for(i=0;i<5;i++){printf("%d ",a[i]);}
//	printf("\n");
//	return 0;
//}

//数组名和元素序号定位元素地址
//#include <stdio.h>
//int main(){
//	int a[5];
//	int i;
//	printf("please enter 5 integer numbers:\n");
//	for(i=0;i<5;i++){scanf("%d",&a[i]);}
//	for(i=0;i<5;i++){printf("%d ",*(a+i));}
//	printf("\n");
//	return 0;
//}

//指针变量指向数组
//#include <stdio.h>
//int main(){
//	int a[5];
//	int *p;
//	printf("please enter 5 integer numbers:\n");
////	for(p=a;p<(a+5);p++){scanf("%d",p);}
////	for(p=a;p<(a+5);p++){printf("%d ",*p);}
//	//复合赋值表达式
//	for(p=a;p<(a+5);){scanf("%d",p++);}
//	for(p=a;p<(a+5);){printf("%d ",*p++);}
//
//	printf("\n");
//	return 0;
//}