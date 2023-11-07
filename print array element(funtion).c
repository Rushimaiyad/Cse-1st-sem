#include<stdio.h>

void printarr(int[],int n);
void main(){
	
	int i,n;
	int arr[n];
	printf("enter size of element:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter element of arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printarr(arr,n);
}

    void printarr(int arr[],int n){
    	int i;
    	for(i=0;i<n;i++){
    		printf("arr is :%d\n",arr[i]);
		}
    	
	}
