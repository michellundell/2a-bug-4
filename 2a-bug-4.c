#include <stdio.h>

int main()
{
	char line[80];
	FILE *fp = fopen(__FILE__, "r");

	while (fgets(line, 80, fp) != NULL)
	{
		printf("%s", line);
	}
	fclose(fp);
	
	return(0);
}
