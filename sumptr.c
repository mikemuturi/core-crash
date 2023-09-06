#include <stdio.h>



int* addNumbers(int* num1, int* num2, int* sum)
{
	*sum = *num1 + *num2;

	return sum;
}
int main()
{
	int num1= 200;
	int num2= 100;
	int sum;


	*int result = addNumbers(&num1, &num2, &sum)

		printf("The sum is %d", sum);
	return 0;
}

