//#include <stdio.h>
//int main(){
//	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
//	int (*p)[4],i,j;
//	p=a;		//pָ���ά�����0���׵�ַ
//	printf("please enter row and colum:\n");
//	scanf("%d,%d",&i,&j);
//	printf("a[%d][%d]=%d\n",i,j,*(*(p+i)+j));
//	return 0;
//}

//#include <stdio.h>
//int main(){
//	int a[4]={1,3,5,7};
//	int (*p)[4];	
//	p=&a;			//pָ��һά���飬����д��p=a�������Ļ� (*p)[3]ָ������������Ϊ3�ĵ�ַ
//	printf("%d\n",(*p)[3]);
//	return 0;
//}