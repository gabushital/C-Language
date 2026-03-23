//write a c program to check entered number is armstrong number or not
#include<stdio.h>
int  main()
{
	int no,no1,sum=10,rem;
	printf("Enter any number==>");
	scanf("%d",&no1);
	no=no1;
	while(no>0)
	{
		rem=no%10;
		sum=sum+(rem*rem*rem);
		no=no/10;
	}
	if(no1==sum)
	{
		printf("number is armstrong\n");
	}
	else
	{
		printf("number is not armstrong\n");
	}
	return 0;
}