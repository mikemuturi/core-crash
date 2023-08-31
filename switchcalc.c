#include <stdio.h>

int main()
{
	char operator;

	printf("choose an operator ['+', '-', '*', '/']: ");
	scanf("%c", &operator);

	double num1, num2;

	printf("\n Enter first number: ");
	scanf("%lf", &num1);

	printf("\n Enter second number: ");
	scanf("%lf", &num2);

	double result;

	switch(operator){

		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 -num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
				break;
		default:
			printf("invalid input");
			break;
	}

	printf("\n  %.2lf", result);

}


