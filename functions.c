#include <stdio.h>


//functions are used to break program to small blocks of code
//group of related statements that perfom specific tasks
//void return type doesn't return anything

void greet()
	{
		printf("Good Morning\n");
	}
void addNumbers()
	{
		int number1, number2;

		printf("Enter number1 : ");
		scanf("%d", &number1);

		printf("Enter Number2 : ");
		scanf("%d", &number2);
		
		int sum = number1 + number2;

		printf("sum is %d\n ", sum);
	}

double calculateSquare()
	{
		double number;

		printf("Enter a double number : ");
		scanf("%lf", &number);

		double square = number * number;
	
		printf("square is  %.2lf\n",  square);
	}
int main()
{
	//return type shows data type
	//it's good practice to use descriptive name for easy readability of your functions.
	 
	 greet();

	 addNumbers();

	 calculateSquare();

	return 0;
}		
