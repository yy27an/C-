#include <stdio.h>
int main(){
	void average(float *p,int n);
	void search(float (*p)[4],int n);
	float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
	average(*score,12);
	search(score,2);
	return 0;
}
void average(float *p,int n){
	float *p_end;
	float aver,sum=0;
	p_end=p+n-1;
	for(;p<=p_end;p++) sum+=*p;
	aver=sum/n;
	printf("average=%5.2f\n",aver);
}
void search(float (*p)[4],int n){
	int i;
	printf("The score of No.%d are:\n",n);
	for(i=0;i<4;i++) printf("%5.2f ",*(*(p+n)+i));
	printf("\n");
}

#include <stdio.h>
int main(){
	void search(float (*p)[4],int n);
	float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}};
	search(score,3);
	return 0;
}
void search(float (*p)[4],int n){
	int i,j,flag;
	for(j=0;j<n;j++){
		flag=0;
		for(i=0;i<4;i++) 
			if(*(*(p+j)+i)<60) 
				flag=1;
		if(flag==1){
			printf("No.%d fails,his scores are:\n",j+1);
			for(i=0;i<4;i++) 
				printf("%5.2f ",*(*(p+j)+i));
			printf("\n");
		}
	}
}
