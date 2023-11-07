#include<stdio.h>
#include<string.h>

void main(){
	
	char s1[1000],s2[1000];
	
	printf("enter first string :");
	gets(s1);
		printf("enter second string :");
	gets(s2);
	
	printf("lenth of string 1 is : %d\n",strlen(s1));
	printf("lenth of string 2 is : %d\n",strlen(s2));
	
	if(strcmp(s1,s2)==0){
		
		printf("string are same");
	}
	else{
		printf("string are not same");
	}
	printf("\n");
	
	printf("%s\n",strcpy(s1,s2));
	printf("%s\n",strcat(s1,s2));
	
		printf("reverse string is :%s\n",strrev(s1));
	printf("reverse string is :%s\n",strrev(s2));
	
	
	
	
	
	printf("%s\n",strlwr(s1));
	printf("%s\n",strlwr(s2));
	
	printf("%s\n",strupr(s1));
	printf("%s\n",strupr(s2));
}
