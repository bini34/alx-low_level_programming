// hack.c
#include <stdio.h>
#include <stdlib.h>

__attribute__((constructor))
void make_me_win(void)
{
	FILE *fp = fopen("winning_numbers.txt", "w");
	if (fp != NULL)
	{
		fprintf(fp, "9 8 10 24 75 9\n");
		fclose(fp);
	}
}
