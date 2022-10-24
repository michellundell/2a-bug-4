#include <stdio.h>


int main() 
{
	char letter;
	FILE *fp = fopen(__FILE__, "r");
	while (letter != EOF)
	{
		letter = fgetc(fp);
		putchar(letter);
	}

	fclose(fp);
	return(0);
}
