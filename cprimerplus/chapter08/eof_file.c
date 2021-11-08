#include <stdio.h>

int main(void)
{
	FILE *fp;
	int ch;

	fp = fopen("text.txt", "r");
	if(fp == NULL)
	{
		printf("Error in file opening...\n");
		return -1;
	}

	printf("Content of the file:\n");
	/*
	 *Here we are using infinite loop to print value of
	 EOF, loop will be terminate as we got EOF.
	 * */
	while(1)
	{
		ch = getc(fp);
		printf("%c [%d]\n", ch, ch);
		if(ch == EOF)
		{
			break; // terminate loop
		}
	}
	return 0;
}
