#include <stdio.h>


int main()
{
	char str[] = "programiz";

	//string in c is terminated by a non character \0 whch helps compiler to enderstand the end of string.

		printf("%s", str);
		printf("%c", str[0]);//accessing single character from string
		str[3] = 'R';//changing letter using index;

	char strng[20];

	//printf("\n Enter your name : ");
	//scanf("%s", strng);
	fgets(strng, sizeof(strng), stdin);
	
	printf("\n %s",strng);	

	return 0;
}
