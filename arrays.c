#include <stdio.h>


int main()
{
	int age[5] = {1, 2, 3};





	age[4] = 55;


	age[1] = 30;

	printf("%d", age[1]);


	printf("\n %d ", age[2]);

	printf("\n Enter value of index 3 : ");
        scanf("%d", &age[3]);

	printf("\n index of 3 is %d", age[3]);

	return 0;

}
