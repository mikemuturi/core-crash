#include <stdio.h>


int main()
{
	int arr[5] = {34, 12, 21, 54, 48};

	int largest = *arr;


	for(int i = 1; i < 5; i++)
	{
		if(largest < *(arr+1))
				{
				largest = *(arr+1);
				}

	}

	printf("The largest number is %d ", largest);
}
