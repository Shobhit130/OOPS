#include<stdio.h>
int add(int n1,int n2){
	int res;
	res = n1+n2;
	return res;
}
int subtract(int n1,int n2){
	int res;
	res = n1-n2;
	return res;
}
int multiply(int n1,int n2){
	int res;
	res = n1*n2;
	return res;
}
float divide(int n1,int n2){
	float res;
	res = (float) n1/n2;
	return res;
}
int main(){
	int choice,n1,n2,result;
	printf("Enter the two numbers: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	do{
		printf("__________ARITHMETIC OPERATIONS__________");
		printf("\n1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("Press 0 to exit.....\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: {
				result = add(n1,n2);
				printf("The addition of two numbers is %d.\n",result);
				break;
			}
			case 2:{
				result  = subtract(n1,n2);
				printf("The subtraction of two numbers is %d.\n",result);
				break;
			}
			case 3:{
				result = multiply(n1,n2);
				printf("The multiplication of two numbers is %d.\n",result);
				break;
			}
			case 4:{
				float(result) = divide(n1,n2);
				printf("The division of two numbers is %.2f.\n",result);
				break;
			}
			case 0:{
				break;
			}
			default:{
				printf("Entered wrong choice!!!!\n");
				break;
			}
		}
	}while(choice);
	return 0;
}
