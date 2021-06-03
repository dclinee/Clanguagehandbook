#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fd;
	
	fd = fopen("file.txt", "w+");

	fprintf(fd, "%s %s %s %d\n", "We", "are", "in", 2021);

	fclose(fd);

	exit(0);
}
