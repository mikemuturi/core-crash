#include <stdio.h>



int main()
{
	int age[5];


	for( int i = 0; i < 5; i++)
	{
		scanf("%d", &age[i]);
	}

	for( int i = 0; i < 5; i++)
	{
		printf("\n %d", age[i]);
	}

	return 0;
}
