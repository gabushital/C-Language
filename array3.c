//write a c program to find maximum number from 10 numbers
#include<stdio.h>
int  main()
{
	int a[10],i,max=0;
	for(i=0;i<10;i++)
	{
		printf("\n Enter array element:");
		scanf("%d",&a[i]);
		if(max<a[i]);
		{
			max=a[i];
		}
	}
	printf("\n you have entered following elements\n");
	for(i=0;i<10;i++)
	{
		printf("\n Element on %d index is:%d",i,a[i]);
	}
	printf("\n Maximum value=%d",max);
	return 0;
}