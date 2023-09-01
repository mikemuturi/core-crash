#include <stdio.h>
#include <math.h>


//functions are used to break program to small blocks of code
//group of related statements that perfom specific tasks
//void return type doesn't return anything

void greet()
	{
		printf("Good Morning\n");
	}
int addNumbers()
	{ //note int in function definiton is accompanied by return,
	  //you can only return if function is initialized as int.
		int number1, number2;

		printf("Enter number1 : ");
		scanf("%d", &number1);

		printf("Enter Number2 : ");
		scanf("%d", &number2);
		
		int sum = number1 + number2;

		//printf("sum is %d\n ", sum);

		return sum;

		printf("After return statement");

		
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

	int result =  addNumbers();

	printf(" Result = %d\n", result);

	 calculateSquare();

	 float result1;

	 //printf("Enter a float value: ");
	 //scanf("%f", &result1);
	 
	 result1 = sqrt(5);

	 printf("The square root is %f", result1);



	return 0;
}		
