#include <stdio.h>
#include <stdlib.h>


int main()
{
	int* ages;
	int n = 4;

	ages = (int*) malloc(n * sizeof(int));


	if ( ages == NULL){
		printf("Memory cannot be allocated\n");
		 return 0;
	}

	printf("Input values of n ");
	for(int i = 0; i < n; i++)
	{
		scanf("%d", ages + i);
	}
	
	printf("Inputed values are\n");
	for(int i = 0; i < n; i++)
	{
		printf("%d \n", *(ages + i));

	}


	n = 6;

	ages[4] = 32;
	ages[5] = 50;


	ages = realloc(ages, n * sizeof(int));

	printf("New allocation is\n ");
	for(int i = 0; i < n; i++)
	{
		printf("%d\n", *(ages + i));

	}

	free(ages);

	return 0;
}





