#include <stdio.h>
#include <string.h>

//strlen prints the length of a string
//strcat concatenate strings
//strcpy copies one string to another
//strcmp compares two string and returns zero if they are equal.

int main()
{
	char language[] = "C programming";
	char food[] = "Pizza";

	char text1[] = "Hi ";
	char text2[] = "Mike";
	char bestfood[strlen(food)];

	char text3[] = "abcd";
	char text4[] = "efgh";


	int result = strcmp(text3, text4);

	printf(" \n %d", result);

	
	strcat(text1, text2);

	printf(" \n %s", text1);
	

	strcpy(bestfood, food);

	printf( "\n %s", bestfood);

	printf("\n %s", language);


	printf("\n Length of %zu", strlen(language));

		return 0;
}
