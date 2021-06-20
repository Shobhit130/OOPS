#include<stdio.h>
#include<string.h>
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
	int n;
	double sum=0;
	double average=0;
	scanf("%d",&n);
	struct student s[n];
	struct student *ptr;
	ptr = s;
	for(int i=0;i<n;i++){
		scanf("%s",ptr->name);
		scanf("%s",ptr->rno);
		scanf("%lf",&ptr->marks1);
		scanf("%lf",&ptr->marks2);
		ptr++;
	}
	ptr = s;
	for(int i=0;i<n;i++){
		sum = sum+ptr->marks1+ptr->marks2;
		ptr->total = sum;
		sum=0;
		ptr++;
	}
	ptr=s;
	for(int i=0;i<n;i++){
		average = (ptr->total)/2;
		ptr->avg = average;
		average=0;
		ptr++;
	}
	ptr=s;
	for(int i=0;i<n;i++){
		if(ptr->avg>=75){
			strcpy(ptr->clas,"Distinction");
		}else if(ptr->avg>=60){
			strcpy(ptr->clas,"First class");
		}else if(ptr->avg>=50){
			strcpy(ptr->clas,"Second class");
		}else if(ptr->avg>=40){
			strcpy(ptr->clas,"Third class");
		}else{
			strcpy(ptr->clas,"\t");
		}
		ptr++;
	}
	ptr=s;
	for(int i=0;i<n;i++){
		if(ptr->marks1<40 || ptr->marks2<40){
			strcpy(ptr->status,"Fail");
		}else{
			strcpy(ptr->status,"Pass");
		}
		ptr++;
	}
	ptr=s;
	for(int i=0;i<n;i++){
		printf("%s\t%s\t%.lf\t%.lf\t%.lf\t%.lf\t",ptr->name,ptr->rno,ptr->marks1,ptr->marks2,ptr->avg,ptr->total);
		printf(ptr->clas);
		printf("\t");
		printf(ptr->status);
		printf("\n");
		ptr++;
	}
	
}
