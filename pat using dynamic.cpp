#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char name[10];
	char rno[10];
	double marks1;
	double marks2;
	char status[10];
	char clas[10];
	double total;
	double avg;
};
int main(){
	struct student *ptr;
	int n;
	double sum=0;
	double average=0;
	scanf("%d",&n);
	ptr = (struct student*)malloc(n*sizeof(struct student));
	for(int i=0;i<n;i++){
		scanf("%s",(ptr+i)->name);
		scanf("%s",(ptr+i)->rno);
		scanf("%lf",&(ptr+i)->marks1);
		scanf("%lf",&(ptr+i)->marks2);
	}
	for(int i=0;i<n;i++){
		sum = sum + (ptr+i)->marks1 + (ptr+i)->marks2;
		(ptr+i)->total = sum;
		sum=0;
		average = ((ptr+i)->total)/2;
		(ptr+i)->avg = average;
		average = 0;
	}
	for(int i=0;i<n;i++){
		if(((ptr+i)->avg)>=75){
			strcpy((ptr+i)->clas,"Distinction");
		}else if(((ptr+i)->avg)>=60){
			strcpy((ptr+i)->clas,"First class");
		}else if(((ptr+i)->avg)>=50){
			strcpy((ptr+i)->clas,"Second class");
		}else if(((ptr+i)->avg)>=40){
			strcpy((ptr+i)->clas,"Third class");
		}else{
			strcpy((ptr+i)->clas,"\t");
		}
	}
	for(int i=0;i<n;i++){
		printf("%s\t%s\t",(ptr+i)->name,(ptr+i)->rno);
		printf("%.lf\t%.lf\t",(ptr+i)->total,(ptr+i)->avg);
		printf("%s\n",(ptr+i)->clas);
	}
	free(ptr);
	return 0;
}
