#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n;


	  int* ptr;

  	  ptr = (int*) malloc(n * sizeof(int));


	if(ptr == NULL)
	{
		printf("Memory cannot be allocated");
		
		return 0;
	}


	

	  printf("Allocated Memory\n");
  		for (int i = 0; i < n; ++i) {
      			printf("%d\n", *( ptr + i));
  			}

	n = 6;

	ptr = realloc(ptr, n * sizeof(int));

	printf("Newly allocated memory");
	for (int i = 0; i < n; i++)
	{
		printf(" %p\n", ptr + i );
	}



	return 0;
}




