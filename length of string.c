#include<stdio.h>

void main(){
	int i,count=0;
	char arr[100];
	printf("enter a string :");
	gets(arr);
	puts(arr);
	for(i=0;arr[i]!='\0';i++){
		count++;
	}
	printf("length of string is : %d",count);
}
