#include <stdio.h>

int main()
{
	FIFL *fp;
	int c;

	fp = fopen("file.txt", "r");
	while(1)
	{
		c = fgetc(fp);
		if(feof(fp)){
			break;
		}
		printf("%c", c);
	}
	fclose(fp);

	return 0;
}



