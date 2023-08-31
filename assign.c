#include <stdio.h>

int main()

{
	int number;


	printf("Enter a number: ");
	scanf("%d", &number);


	if(number == 0 )
	{
		printf("\n The number is zero ");
	}
	else if(number >= 1)
	{
		printf("\n The number is positive");
	}else if(number < 0)
	{
		printf("\n The number is negative");
	}else
	{
		printf("\n Invalid input");
	}



	return 0;



}

