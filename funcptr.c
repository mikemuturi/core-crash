#include <stdio.h>

void findValue(int* num)
{
	*num = 39;
}

void findSquare(int* num1)
{
	int square = *num1 * *num1;

	*num1 = square;

}
int main()
{

	int number = 21;

	int num1 = 40;

	findSquare(&num1);
	printf("The square is %d \n ", num1);
		
	findValue(&number);

	printf("\n Value is %d", number);

	return 0;

}

