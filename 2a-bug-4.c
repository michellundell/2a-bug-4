#include <stdio.h>

int main() 
{
	char c = '.';
	FILE *fp = fopen(__FILE__, "r");
	while (c != EOF)
	{
		c = fgetc(fp);
		putchar(c);
	}

	fclose(fp);
	return(0);
}
