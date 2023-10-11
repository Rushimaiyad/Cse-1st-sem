#include<stdio.h>

void main(){
	int n,i,oddcount=0,evencount=0;
	printf("enter a number :");
	scanf("%d",&n);
	int arr[i];
	
	for(i=0;i<n;i++){
	
	printf("enter an element in arr[%d]:", i);
	scanf("%d",&arr[i]);
}
    for(i=0;i<n;i++){
	
    if(arr[i]%2==0){
    	
    	evencount++;
    }
    else{
    
    	oddcount++;
	}
}
     printf("even number %d",evencount);
     printf("\nodd number %d",oddcount);
 }

