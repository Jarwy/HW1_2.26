#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int num1, num2 ;

	printf("Enter two integers,I will check if the first number can be divided by the second.\n ");
	printf("First integer:"); 
	scanf_s("%d",&num1);
	printf("Second integer:");
	scanf_s("%d", &num2);
	
	if (num1 % num2 == 0)
	{
		printf("The first integer can be divided by the second!\n");
	}
	else
	{
		printf("The first integer can't be divided by the second!\n");
	}

	system("pause");
	return 0;
}