#include<stdio.h>
#include<stdlib.h>

int main ()
	{
		char input[] = "24.0 4.0";
		char * ptr_end;
		double x, y;

		x = strtod (input,&ptr_end);
		y = strtod (ptr_end,NULL);

		printf ("\nOutput= %.2lf\n\n", x/y);
		return 0;
    }