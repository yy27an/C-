#include <stdio.h>
int main(){
	char a[]="I am a student.",b[20];
	int i;
	for(i=0;*(a+i)!='\0';i++) *(b+i)=*(a+i);
	*(b+i)='\0';
	printf("string a is %s\n",a);
	//printf("string b is %s\n",b);
	printf("string b is ");
	for(i=0;b[i]!='\0';i++) printf("%c",b[i]);
	printf("\n");
}

//用指针变量处理
#include <stdio.h>
int main(){
	char *p1,*p2,a[]="I am a boy.",b[20];
	//printf("%s\n",a);
	for(p1=a,p2=b;*p1!='\0';) *p2++=*p1++;
	*p2='\0';
	printf("string a is %s\n",a);
	printf("string b is %s\n",b);
	return 0;
}

//用字符数组名作为函数参数
#include <stdio.h>
int main(){
	void copy_string(char from[], char to[]);
	char a[]="I am a teacher.";
	char b[]="You are a student.";
	printf("string a=%s\nstring b=%s\n\n",a,b);
	printf("copy string a to string b:\n");
	copy_string(a,b);
	printf("string a=%s\nstring b=%s\n",a,b);
	return 0;
}
void copy_string(char from[], char to[]){
	int i=0;
	while(from[i]!='\0'){
		to[i]=from[i];
		i++;
	}
	to[i]='\0';
}

//用字符型指针变量作实参
#include <stdio.h>
int main(){
	void copy_string(char from[], char to[]);
	char a[]="I am a teacher.";
	char b[]="You are a student.";
	char *from=a,*to=b;
	printf("string a=%s\nstring b=%s\n\n",from,to);
	printf("copy string a to string b:\n");
	copy_string(from,to);
	printf("string a=%s\nstring b=%s\n",from,to);
	return 0;
}
void copy_string(char from[], char to[]){
	int i=0;
	while(from[i]!='\0'){
		to[i]=from[i];
		i++;
	}
	to[i]='\0';
}

//用字符型指针变量作形参和实参
#include <stdio.h>
int main(){
	void copy_string(char from[], char to[]);
	char a[]="I am a teacher.";
	char b[]="You are a student.";
	char *p=b;
	//char *p="You are a student.";
	printf("string a=%s\nstring b=%s\n\n",a,p);
	printf("copy string a to string b:\n");
	copy_string(a,p);
	printf("string a=%s\nstring b=%s\n",a,p);
	return 0;
}
//void copy_string(char *from, char *to){
//	for(;*from!='\0';) *to++=*from++;
//	*to='\0';
//}
//简练一些
void copy_string(char *from, char *to){
	while((*to++=*from++));
}
