#include<stdio.h>

float intrest(int p,int r,int t){
	float ans=(p*r*t)/100.0;
	return ans;
}

void main(){
	int p,r,t;
	printf("enter value of p:");
	scanf("%d",&p);
	printf("enter value of r:");
	scanf("%d",&r);
	printf("enter value of t:");
	scanf("%d",&t);
	float ans=intrest(p,r,t);
	printf("ans=%f",ans);
}
