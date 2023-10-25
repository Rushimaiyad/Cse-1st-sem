#include<stdio.h>

float max(float a,float b,float c){
	if(a>b){
		return a;
	}
	else if(a>c){
		return a;
	}
	else if(a<c){
		return c;
	}
	else{
		return b;
	}
}
	void main(){
	float a,b,c;
	printf("enter value of a:");
	scanf("%f",&a);
	printf("enter value of b:");
	scanf("%f",&b);
	printf("enter value of c:");
	scanf("%f",&c);
	float m=max(a,b,c);
	printf("max=%f",m);
	
}
	

