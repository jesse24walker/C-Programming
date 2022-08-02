#include <stdio.h>


int main(void)
{
	
	char data[50] = "This is a string for testing purposes";
	char third[10];
	char fifth[10];
	
	sscanf (data, "%*s %*s %s %*s %s", third, fifth);
	printf ("The text in the string third is %s and the text in the string fifth is %s\n", third, fifth);
	printf ("program finished\n");
}
