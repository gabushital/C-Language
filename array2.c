//write a c program to find sum of ten numbers with use of array
#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("\nEnter array element:");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n you have entered following element\n");
	for(i=0;i<10;i++)
	{
		printf("\n Element on %d index is:%d",i,a[i]);
	}
	printf("\n Sum=%d",sum);
	return 0;
}