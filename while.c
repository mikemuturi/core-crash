#include <stdio.h>

void main()
{
	while(1){


		int number;


		printf(" Enter a number: ");
		scanf("%d", &number);

		if (number < 0)
		{
			break;
		}
		printf("%d\n", number);
	}
}


