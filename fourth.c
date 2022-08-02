#include <stdio.h>

int main(void)
{
	char str1[10] = "first";
	char str2[10] = "contact";
	char str3[50];
	
	
	
	sprintf (str3, "%s %s", str1, str2);
	printf ("%s %s", str1, str2);
}
