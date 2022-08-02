#include <stdio.h>

int main (void)
{
	FILE *fp;
	int value;
	
	fp = fopen ("/home/pi/input.txt", "rb");
	if (fp)
	{
		while(1)
		{
			value = fgetc (fp);
			if (value == EOF) break;
			else printf ("%c", value);
		}
		fclose (fp);
	}
}
