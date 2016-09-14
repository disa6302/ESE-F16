#include<stdio.h>
#include "hw1.h"
#include<string.h>
int main()
{
	int length=0,i=0;
	char arr[30];

	printf("\nEnter the string:");
	scanf("%[^\n]s",arr);
	length=strlen(arr);
	printf("\nThe original string is:");
	for(i=0;i <=length;i++)
	{
		printf("%c",arr[i]);
	}

	char a=reverse(arr,length);
	if(a!=0)
		printf("\nError in Input!!");
	else
	{
	printf("\nThe reversed string is:");
	for(i=0;i<=length;i++)
	{
		printf("%c",arr[i]);
	}
	}
	printf("\n");

}
