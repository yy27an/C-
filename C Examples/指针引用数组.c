//a[i]==*(a+i);p=a,*p,*(p+i)
//�±귨
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

//��������Ԫ����Ŷ�λԪ�ص�ַ
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

//ָ�����ָ������
//#include <stdio.h>
//int main(){
//	int a[5];
//	int *p;
//	printf("please enter 5 integer numbers:\n");
////	for(p=a;p<(a+5);p++){scanf("%d",p);}
////	for(p=a;p<(a+5);p++){printf("%d ",*p);}
//	//���ϸ�ֵ���ʽ
//	for(p=a;p<(a+5);){scanf("%d",p++);}
//	for(p=a;p<(a+5);){printf("%d ",*p++);}
//
//	printf("\n");
//	return 0;
//}