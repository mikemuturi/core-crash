#include <stdio.h>
#include <string.h>


struct voter
{
	int age;
	char name[20];
	int id;
	char location[60];
}voter1;

int main()
{
	voter1.age = 25;
	strcpy(voter1.name, "Samuel");
	voter1.id = 39089000;
	strcpy(voter1.location, "Nairobi");

	printf(" Voter one age is %d \n", voter1.age);
        printf(" Voter one name is %s\n", voter1.name);
        printf(" ID is %d \n", voter1.id);
	printf(" Location is %s \n", voter1.location);

	return 0;
}
