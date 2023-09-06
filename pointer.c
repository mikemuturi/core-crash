#include <stdio.h>
//two ways of creating pointer
// int *ptr not recommended way sinvce it poses chellenges
// int* ptr -> recommended way of creating pointer
int main()
{
	int age = 25;


	//printf("%p", &age);

	int* ptr = &age;

	*ptr = 32; //this means pointer changes value stored in it to 32


	printf("\nMemory address is  %p", ptr);//print memory address
	printf("\nvalue is  %d ", *ptr);//print value stored by pointer



	return 0;

}
