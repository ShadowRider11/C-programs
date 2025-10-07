#include<stdio.h>
int main()

{
	int arr[50];
	
	int num,i, sum;
	printf("enter size of array:");
	scanf("%d", &num);
	
	
	printf("enter elements:");
	for(i=0;i<num;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<num;i++) 
	{
		sum = sum + arr[i];
	}
	
	printf("sum is %d", sum);
	}
	
