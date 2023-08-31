#include <stdio.h>


void main()
{
	int number;


	printf("Enter the number between 1 and 7: ");
 	scanf("%d", &number);

	switch(number)
	{
	case 1:
		printf("Sunday");
		break;
	
	case 2:
	
	 	printf("Monday");
		break;

	case 3:
		printf("Tuesday");
		break;

	case 4:
		printf("Wenesday");
		break;

	case 5:
		printf("Thursday");
		break;

	case 6:
		printf("Friday");
		break;

	case 7:
		printf("saturday");
		break;

	default:
		printf("Invalid Number");


}

}
