#include <stdio.h>
#include <string.h>
int main(){
	void sort(char *name[],int n);
	void print(char *name[],int n);
	char *name[]={"Follow me","BASIC","Great Wall","FORTAN","Computer Design"};
	int n=5;
	sort(name,n);
	print(name,n);
	return 0;
}
void sort(char *name[],int n){
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=k+1;j<n;j++) if(strcmp(name[k],name[j])>0) k=j;	
		if(k!=i) {temp=name[i];name[i]=name[k];name[k]=temp;}	//Ñ¡ÔñÅÅÐò
	}
}
//void print(char *name[],int n){
//	int i;
//	for(i=0;i<n;i++) printf("%s\n",name[i]);
//}
//¸Ä½ø
void print(char *name[],int n){
	int i=0;
	char *p;
	p=name[0];
	while(i<n){p=*(name+i++); printf("%s\n",p);}
}
