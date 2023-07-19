#include "main.h"
/**
 * positive_or_negative - determine the number +ve or -ve
 *
 * @i: a no that check
*/
void positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}

