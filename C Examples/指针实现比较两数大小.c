//ֱ����������������ָ��
//#include <stdio.h>
//int main(){
//	int *p1,*p2,*p,a,b;
//	printf("please enter two integer numbers:\n");
//	scanf("%d,%d",&a,&b);
//	p1=&a; p2=&b;
//	if(a<b) {p=p1; p1=p2; p2=p;}
//	printf("a=%d,b=%d\n",a,b);
//	printf("max=%d,min=%d\n",*p1,*p2);
//	return 0;
//}

//ָ�뺯����Ϊ��������
//ʹָ����ָ��ı���ֵ���������仯
//#include <stdio.h>
//int main(){
//	void swap(int *p1, int *p2);
//	int a,b;
//	int *pointer_1,*pointer_2;
//	printf("please enter a and b:\n");
//	scanf("%d,%d",&a,&b);
//	pointer_1=&a;
//	pointer_2=&b;
//	if(a<b) swap(pointer_1,pointer_2);
//	printf("max=%d,min=%d\n",a,b);
//	return 0;
//}
//void swap(int *p1, int *p2){		//ʵ�ֵ�ַ��ָ�������ֵ����
//	int temp;
//	temp=*p1;
//	*p1=*p2;
//	*p2=temp;
//}

////�������swap����ʹ��
//void swap(int *p1, int *p2){
//	int *temp;			//����temp����ָ�����͵ĵ�ַ
//	*temp=*p1;			//��δ֪�Ĵ洢��Ԫ��ֵ�������壬�ƻ�ϵͳ��������
//	*p1=*p2;
//	*p2=*temp;
//}
////������ͨ���ı�ִ�е��ú�����ʵ��ָ�������ֵ
////ֻ�ܸı�ʵ��ָ�������ָ��ı���ֵ
//void swap(int *p1, int *p2){
//	int *temp;
//	temp=p1;
//	p1=p2;
//	p2=temp;
//}