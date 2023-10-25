#include<stdio.h>

int max(int x,int y){
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}
int min(int x,int y){
	if(x<y){
		return x;
	}
	else{
		return y;
	}
}
	
	


void main(){
	int a,b;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	int m=max(a,b);
	printf("max=%d",m);
	int n=min(a,b);
	printf("min=%d",n);
}
