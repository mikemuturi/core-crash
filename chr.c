#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;

	printf("Enter alphabet character : ");
	scanf("%c", &ch);
	
	if(isupper(ch))
	{
		ch = tolower(ch);
		printf(" converted to lowercase %c\n", tolower(ch));
	}
	else 
	{
		ch = toupper(ch);
		printf("Converted to uppercase %c\n", ch);
	}

	return 0.;
}
