#include<stdio.h>

//Write a C program that finds all the divisors of an integer.

int main()
{
	int number,i,counter = 0;
	
	printf("Input the number: ");		scanf("%d",&number);
	
	printf("All Divisors of the number:\n");
	
	for(i = 1; i <= number; i++)
	{
		if(number % i == 0)
		{
			printf("%d\n",i);
			counter++;
		}
	}
	printf("\n");
	
	if(counter == 2)
	{
		printf("%d is a prime number\n",number);
	}
	
	return 0;
}
