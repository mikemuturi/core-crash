#include <stdio.h>

int main()
{
	int age;

	printf("Enter your age ");
	scanf("%d", &age);

	if(age > 120 || age <= 0)
	{
		printf("invalid voter");
	}

	else if(age >= 18)

	{	
		printf("\n you are eligible to vote");
	
	}else
	{
	       	printf("\n you are not eligible to vote!");
	}
	return 0;
}
