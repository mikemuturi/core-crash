#include <stdio.h>

int main()
{
	FILE*  ftpr;
	
	char content[1000];

	ftpr = fopen("file.txt", "r");

	if(fopen != NULL)
	{

		while(fgets(content, 1000, ftpr))
		{
			printf("%s", content);
	//printf("file opened successful\n");

	}
	}

	return 0;



}
