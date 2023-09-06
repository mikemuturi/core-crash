#include <stdio.h>
#include <stdlib.h>

int main()

{
	FILE* fileptr1;

	
	fileptr1 = fopen("filptr.txt", "w");
	      fputs("New message one\n", fileptr1);
	      fputs("Message two\n", fileptr1);

	fclose(fileptr1);

	fileptr1 = fopen("filptr.txt", "r");
	char content[1000];

	if(fileptr1 != NULL)
	{
		while(fgets(content, 1000, fileptr1))
		{
			printf(" %s\n", content);
			
		}
	}else
		{
			printf(" Unsuccessful");
		}
	
	

	fclose(fileptr1);


	return 0;

}










	
