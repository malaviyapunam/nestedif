#include<stdio.h>
main()
{
	int num1,num2,num3;
	printf("Enter a value of the first number:");
	scanf("%d",&num1);
	printf("Enter a value of the second number:");
	scanf("%d",&num2);
	printf("Enter a value of the third number:");
	scanf("%d",&num2);
	
	if(num1<num2)
	{
		if(num1<num2)
		{
			printf("The minimum value is:%d",num1);
		}
		else
		{
			printf("The minimum value is:%d",num2);
		}
	}
	else
	{
		if(num2<num3)
		{
			printf("The minimum value is:%d",num2);
		}
		else
		{
			printf("The minimum value is:%d",num3);
		}
	}
}