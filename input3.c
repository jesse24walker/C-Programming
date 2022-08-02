#include <stdio.h>

int main (void)
{
	FILE *fp;
	
	fp = fopen ("C:/Users/jesse/pi/output.txt", "wb");
	
	if (fp)
	{
		fprintf (fp, "This is some text.\n");
		fclose (fp);
	}
}
