#include<stdio.h>
void main(){
	float a,b;
	int choice;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	printf("1=addition");
	scanf("%d",&choice);
	printf("2=subtraction");
	scanf("%d",&choice);
	printf("3=multiplication");
	scanf("%d",&choice);
	printf("4=division");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:printf("%f",a+b);
		break;
		case 2:printf("%f",a-b);
		break;
		case 3:printf("%f",a*b);
		break;
		case 4:printf("%f",a/b);
		break;
		default:printf("enter valid number");
		break;
		
	}
}
