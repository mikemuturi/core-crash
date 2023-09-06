#include <stdio.h>


int main()
{
	int numbers[5] = {1, 3, 5, 7, 9};


	for (int i = 0; i < 5; i++)
	{
		printf(" %d = %p\n", numbers[i], &numbers[i]);
	}

	printf("Array address of 1 : %p\n", numbers);
	printf("Array address of 3 : %p\n", numbers + 1);
	printf("Array address of 5 :%p\n ", numbers + 2);


	*numbers = 20;
	*(numbers + 4) = 11;

	printf("First element: %d\n", *numbers);
	printf(" Last Element: %d", *(numbers + 4));


	return 0;


}

