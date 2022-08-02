#include <stdio.h>

int main (void)
{
	FILE *fp;
	int value;
	
	fp = fopen ("C:\\output.txt", "wb");
  
	
	if (fp)
	{
		for (value = 48; value < 58; value++)
		{
			fputc (value, fp);
		}
		fclose (fp);
	}
}
