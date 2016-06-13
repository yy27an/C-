//#include <stdio.h>
//int main(){
//	char *name[]={"Follow me","BASIC","Great Wall","FORTAN","Computer Design"};
//	char **p;			//char *(*p) p指向一个字符指针变量，其指向一个字符型数据
//	int i;
//	for(i=0;i<5;i++){
//		p=name+i;
//		printf("%s\n",*p);
//		printf("地址值为:%d\n",*p);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	int a[5]={1,3,5,7,9};
//	int i,*num[5],**p;			//指向整型变量的指针数组
//	for(i=0;i<5;i++) num[i]=&a[i];
//	for(p=num;p<(num+5);) printf("%d ",**p++);
//	printf("\n");
//	return 0;
//}
