#include <stdio.h>

int main() 
{
	printf("#include <stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
        /* uuuhhh */
	printf("}\n"); 

	FILE *fpointer;
	char ch;

	fpointer = fopen(__FILE__, "r");

	if(!fpointer)
	{
		printf("File is empty!\n");
	}

	for(int i = 0; ch != EOF; i++)
	{
		ch = fgetc(fpointer);
		printf("%c", ch);
	}

	if(feof(fpointer))
	{
		printf("You have reached the end of the file.\n");
	}

	fclose(fpointer);

	return(0);
}
