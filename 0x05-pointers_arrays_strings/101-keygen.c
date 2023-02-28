#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	char password[7];
	int i, checksum;

	srand(time(NULL));
	for (i = 0; i < 6; i++)
	{
	password[i] = rand() % 94 + 33;
	}
    checksum = (int)password[0] ^ 0x3b;
    for (i = 1; i < 6; i++)
    {
	    checksum ^= (int)password[i];
    }
    password[6] = (char)checksum;

    printf("%s", password);
	return (0);
}

