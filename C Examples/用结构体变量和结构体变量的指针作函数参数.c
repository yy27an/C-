//#include <stdio.h>
//#define N 3
//struct Student{
//	int num;
//	char name[30];
//	float score[3];
//	double aver;
//};
//int main(){
//	void input(struct Student stu[]);
//	struct Student max(struct Student stu[]);
//	void print(struct Student stu);
//	struct Student stu[N],*p=stu;
//	input(p);
//	print(max(p));
//	return 0;
//}
//void input(struct Student stu[]){
//	int i;
//	printf("请输入各学生的信息:学生、姓名、三门课成绩:\n");
//	for(i=0;i<N;i++){
//		scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
//		stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
//	}
//}
//struct Student max(struct Student stu[]){
//	int i,m=0;
//	for(i=0;i<N;i++) if(stu[i].aver>stu[m].aver) m=i;
//	return stu[m];
//}
//void print(struct Student stu){
//	printf("\n成绩最高的学生为:\n");
//	printf("学号:%d\n姓名:%s\n三门课成绩:%5.1f,%5.1f,%5.1f\n平均成绩:%6.2lf\n",stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.aver);
//}
