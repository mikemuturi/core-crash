#include <stdio.h>

enum Day
{
	Sunday,
	Monday,
	Tuesday,
	wenesday,
	Thursday,
	Friday,
	Saturday
};

int main()
{
	enum Day  weekend1 = Saturday;
	enum Day weekend2 = Sunday;

	printf(" Weekend1 is %d\n", weekend1);
	printf(" weekend2 is %d\n", weekend2);

	return 0;
}

