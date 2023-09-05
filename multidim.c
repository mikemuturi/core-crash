#include <stdio.h>


int main()
{
	int arr[2][3] = {{1,3,5},{2,4,6}};//two dimensional array exmple
					  //
	printf("%d\n",arr[0][0]);//printing
				 //
				 //
	arr[1][1] = 8;//reassigning arrays


	arr[1][2];//1 represent first matrix and 2 represent 6

	for (int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; ++j)

		{	printf("%d\n",arr[i][j]); }
	}
	return 0;
}
