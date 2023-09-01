#include <stdio.h>
#include <math.h>
#include <ctype.h>
//ctype header file provides various functions to perform operations on character hence is known as character ctype character header file.
//examples of stdlib
//math func for sqrt/cbrt import #include <math.h>
int  main()
{
	double num, num1;

	int a = 2, b = 3;



	printf("Enter num : ");
	scanf("%lf", &num);

	printf("Cube root is %.3lf\n ", cbrt(num));

	
	printf("Enter value : ");
	scanf("%lf", &num1);


	printf("Your square root is %lf\n", sqrt(num1));

	double result = pow(a,b); //a become base value and b the power of base value is raised by

	printf("The power of result is %lf \n", result);

	//printf("Hello World \n");
	
	//toupper and tolower are standard library functions used to convert case respectivelyi
	//ctype,c actually means character 
	//
	//
	char ch;

	printf("Enter alpha character :  ");
	scanf("%c", &ch);

	if(isupper(ch))
	{
		ch = tolower(ch);
		printf("Your character has been converted to lowercase %c", ch);
	}else
	{
	 	ch = toupper(ch);
	       	printf("Your character has been converted to upper case %c\n",ch);
	}	
	return 0;



}

