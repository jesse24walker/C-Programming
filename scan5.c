#include <stdio.h>
#include <string.h>

int main(void)
{
	char firstname[100], secondname[100], fullname[100];

	printf ("What is your firstname?");
	fgets (firstname, 100, stdin);
	
	printf ("What is your secondname?");
	fgets (secondname, 100, stdin);
	
	strncat(fullname, firstname, strlen(firstname)-1);
	strcat(fullname,"");
	strcat(fullname, secondname);

	printf("\nFirst name: %s", firstname);
	printf("Second name: %s", secondname);
	printf("Full name: %s", fullname);
	printf("\nProgram Finished\n");
	return 0;
}
