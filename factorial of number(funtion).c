#include<stdio.h>

void main(){
	int x;
	printf("enter the number :");
	scanf("%d",&x);
	int sum=fact(x);
	
	printf("%d",sum);
}
int fact(int x){
	if(x==0){
		return 1;
	}
	else{
	return	x*fact(x-1);
	}
}


