#include<unistd>
/**
 * main -begins
 *
 * Description:insert all char by using putchar
 *
 * Return:0
 **/
int main (void)
{
	char str[] = "_putchar";


	for (int i = 0; i <= 8; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
return (0);
}

