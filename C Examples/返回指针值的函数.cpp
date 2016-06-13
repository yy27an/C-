//#include <stdio.h>
//int main(){
//	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
//	float *search(float (*pointer)[4],int n);
//	float *p;
//	int i,k;
//	printf("enter the number of student:\n");
//	scanf("%d",&k);
//	printf("The scores of No.%d are:\n",k);
//	p=search(score,k);		//返回第几个学生的行首地址
//	for(i=0;i<4;i++) printf("%5.2f\t",*(p+i));			//*(*(pointer+n)+i)
//	printf("\n");
//	return 0;
//}
//float *search(float (*pointer)[4],int n){
//	float *pt;
//	pt=*(pointer+n);
//	return pt;
//}
////改写成
//float *search(float (*pointer)[4],int n){
//	float *pt;
//	pt=(*pointer+n);		//主函数将会置换成 *(*pointer+n+i)
//	return pt;
//}

//#include <stdio.h>
//int main(){
//	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
//	float *search(float (*pointer)[4]);
//	float *p;
//	int i,j;
//	printf("The failed students scores are:\n");
//	for(i=0;i<3;i++){
//		p=search(score+i);			//score+i代表第几个首行地址
//		if(p==*(score+i)){
//			printf("No.%d score:\n",i);
//			for(j=0;j<4;j++) printf("%5.2f  ",*(p+j));
//			printf("\n");
//		}
//	}
//	return 0;
//}
//float *search(float (*pointer)[4]){
//	int i=0;
//	float *pt;
//	pt=NULL;
//	for(;i<4;i++) if(*(*pointer+i)<60) pt=*pointer;			//*(*(score+i1)+i2)
//	return pt;
//}