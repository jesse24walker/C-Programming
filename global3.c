#include <stdio.h>
#include <string.h>
typedef struct {
	int inval1;
	int inval2;
	int outval;
	char name[256];
} MY_DATA;
void add (MY_DATA *d)
{
	d->outval = d->inval1 + d->inval2;
}
int main (void)
{
	MY_DATA data;
	
	data.inval1 = 5;
	data.inval2 = 7;
	strcpy(data.name, "Jesse Walker");
	add (&data);
 
	printf ("The sum of %d and %d is %d\n", data.inval1,
		data.inval2, data.outval);
	printf ("My name is %s\n", data.name);
	printf ("Program Finished");
}
