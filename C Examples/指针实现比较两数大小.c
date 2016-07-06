//直接在主函数中运用指针
#include <stdio.h>
int main(){
	int *p1,*p2,*p,a,b;
	printf("please enter two integer numbers:\n");
	scanf("%d,%d",&a,&b);
	p1=&a; p2=&b;
	if(a<b) {p=p1; p1=p2; p2=p;}
	printf("a=%d,b=%d\n",a,b);
	printf("max=%d,min=%d\n",*p1,*p2);
	return 0;
}

//指针函数作为函数参数
//使指针所指向的变量值本身有所变化
#include <stdio.h>
int main(){
	void swap(int *p1, int *p2);
	int a,b;
	int *pointer_1,*pointer_2;
	printf("please enter a and b:\n");
	scanf("%d,%d",&a,&b);
	pointer_1=&a;
	pointer_2=&b;
	if(a<b) swap(pointer_1,pointer_2);
	printf("max=%d,min=%d\n",a,b);
	return 0;
}
void swap(int *p1, int *p2){		//实现地址所指向的整型值传递
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

//错误的是swap函数使用
void swap(int *p1, int *p2){
	int *temp;			//需向temp赋予指向整型的地址
	*temp=*p1;			//向未知的存储单元赋值毫无意义，破坏系统正常工作
	*p1=*p2;
	*p2=*temp;
}
//不可能通过改变执行调用函数中实参指针变量的值
//只能改变实参指针变量所指向的变量值
void swap(int *p1, int *p2){
	int *temp;
	temp=p1;
	p1=p2;
	p2=temp;
}
