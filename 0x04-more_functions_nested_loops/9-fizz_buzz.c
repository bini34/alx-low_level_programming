#include <stdio.h>
/**
 * main-print 1 to 100 if number multiplay by 3 print Fizz
 *      if number multiplay by 5 print Buzz
 *      if number multiplay by 3 and 5 print FizzBuzz
 *      each num and word separate by space
 *
 *Return: 0 (Succes)      
 * */
int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz ");
        else if (i % 3 == 0)
            printf("Fizz ");
        else if (i % 5 == 0)
            printf("Buzz ");
        else
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
