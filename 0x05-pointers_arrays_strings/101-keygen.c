#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */

#define PASSWORD_LENGTH 6

int main(void) 
{
	char password[PASSWORD_LENGTH + 1];
	int i;
	for ( i = 0; i < PASSWORD_LENGTH;i++)
	{
		password[i] = rand() % 26 + 97;
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);
	return (0);
}

