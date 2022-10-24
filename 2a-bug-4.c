#include <stdio.h>

int main()
{
	char c;
	FILE *fp = fopen(__FILE__, "r");

	while ((c = fgetc(fp)) != EOF)
	{
		putchar(c);
	}
	fclose(fp);
	
	return(0);
}
