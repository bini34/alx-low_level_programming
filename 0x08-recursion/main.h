#ifndef MAIN_H
#define MAIN_H

#include <string.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
double sqrt_recursive(double x, double start, double end);
int is_prime_number(int n);
int is_prime_recursive(int n, int divisor);
int is_palindrome(char *s);
int is_palindrome_recursive(char *s, int start, int end);
int wildcmp(char *s1, char *s2);

#endif

