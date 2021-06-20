//#include<stdio.h>
//struct student{
//	int roll;
//	float mark;
//	char name[20];
//};
//int main(){
//	struct student s;
//	scanf("%[^\n]%*c",s.name);
//	scanf("%f",&s.mark);
//	scanf("%d",&s.roll);
//	puts(s.name);
//	printf("%d\n",s.roll);
//	printf("%.2f\n",s.mark);
//	return 0;
//}
//#include<stdio.h>
//struct student{
//	char name[10];
//	float marks;
//	int roll;
//};
//int main(){
//	struct student s[10];
//	for(int i=0;i<2;i++){
//		scanf("%d",&s[i].roll);
//		scanf("%s",s[i].name);
//		scanf("%f",&s[i].marks);
//	}
//	for(int i=0;i<2;i++){
//		printf("%d\n",s[i].roll);
//		printf("%s\n",s[i].name);
//		printf("%f\n",s[i].marks);
//	}
//	return 0;
//}
//#include<stdio.h>
//struct info{
//	int age;
//	int weight;
//};
//int main(){
//	struct info *ptr,person;
//	ptr = &person;
//	scanf("%d",&ptr->age);
//	scanf("%d",&ptr->weight);
//	printf("%d",ptr->age);
//	printf("%d",ptr->weight);
//	return 0;
//}
//#include<stdio.h>
//struct student{
//	char name[10];
//	int roll;
//};
//int main(){
//	struct student *ptr=NULL;
//	struct student a[10];
//	ptr = a;
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		scanf("%s",ptr->name);
//		scanf("%d",&ptr->roll);
//		ptr++;
//	}
//	ptr = a;
//	for(int i=0;i<n;i++){
//		printf("%s\t%d\n",ptr->name,ptr->roll);
//		ptr++;
//	}
//		
//}
// #include<stdio.h>
// struct student{
// 	char name[20];
// 	int roll;
// 	int marks;
// };
// int main(){
// 	struct student s[10];
// 	int n;
// 	printf("Enter the number of students:\n");
// 	scanf("%d",&n);
// 	struct student *ptr;
// 	ptr = s;
// 	for(int i=0;i<n;i++){
// 		printf("Enter the details of student %d\n",i+1);
// 		printf("Enter the name:\n");
// 		scanf("%s",ptr->name);
// 		printf("Enter the roll number:\n");
// 		scanf("%d",&ptr->roll);
// 		printf("Enter the marks:\n");
// 		scanf("%d",&ptr->marks);
// 		ptr++;
// 	}
// 	ptr = s;
// 	for(int i=0;i<n;i++){
// 		printf("%s\t%d\t%d\n",s[i].name,ptr->roll,ptr->marks);
// 		ptr++;
// 	}
// 	return 0;
// }
#include<stdio.h>
struct employee{
    char name[20];
    int id;
    int bp;
    int da;
    int hra;
    int total=0;
};
int main(){
    int n;
    scanf("%d",&n);
    struct employee s[n];
    for(int i=0;i<n;i++){
        scanf("%[^\n]%*c",s[i].name);
        scanf("%d",&s[i].id);
        scanf("%d",&s[i].bp);
        scanf("%d",&s[i].da);
        scanf("%d",&s[i].hra);
    }
    for(int i=0;i<n;i++){
        s[i].total = s[i].bp + ((((s[i].da*s[i].bp)/100))) + s[i].hra;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",s[i].id);
        printf("%d",s[i].total);    
        
    }
}






















































