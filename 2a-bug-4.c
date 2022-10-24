#include <stdio.h>

int main()
{
	char letter;
	FILE *fp = fopen(__FILE__, "r");

	while ((letter = fgetc(fp)) != EOF)
	{
		putchar(letter);
	}
	fclose(fp);
	
	return (0);
}
