#include<stdio.h>
struct doctor{
	int age;
	char name[20];
	char docid[10];
	char gender[1];
};
int main(){
	struct doctor d[10];
	struct doctor *ptr;
	ptr = d;
	int n;
	printf("Enter the number of doctors:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the information of doctor %d\n",i+1);
		printf("Enter the name: \n");
		scanf("%s",ptr->name);
		printf("Enter the age:\n");
		scanf("%d",&ptr->age);
		printf("Enter the gender(M or F):\n");
		scanf("%s",ptr->gender);
		printf("Enter the docid:\n");
		scanf("%s",ptr->docid);
		ptr++;
	}
	ptr = d;
	for(int i=0;i<n;i++){
		printf("%s\t%d\t%s\t%s\n",ptr->name,ptr->age,ptr->gender,ptr->docid);
		ptr++;
	}
	return 0;
}
