#include<stdio.h>

void main(){
	int n,i,count=0;
	printf("enter a number ");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("enter elemennts in arr[%d]", i);
		scanf("%d",&arr[i]);
		
		
		
	
	if(arr[i]%3==0){
		count++;
	}
}
	printf("%d",count);
	
}
