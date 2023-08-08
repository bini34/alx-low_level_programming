#include "main.h"
/**
 * count_words - Prints an array of string
 * @str: The array to prinT
 *
 * Return: Returns the number of words in a string
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			if (in_word)
				in_word = 0;
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		str++;
	}
	return (count);
}
/**
 * copy_word - a function copy from source to distnation
 * @dest: it copies too
 * @src: it copies from
 */
void copy_word(char *dest, char *src)
{
	while (*src && *src != ' ')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
}
/**
 * strtow - a function that splits a string into words
 * @str: a string
 * Return: return string or it fail it return NULL
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i = 0, j;

	if (str == NULL || *str == '\0' || (strspn(str, " \t\n\r\f\v") == strlen(str)))
		return (NULL);
	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == ' ')
			str++;
		else
		{
			int word_len = 0;
			char *word_start = str;

			while (*str && *str != ' ')
			{
				word_len++;
				str++;
			}
			words[i] = malloc((word_len + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			copy_word(words[i], word_start);
			i++;
		}	}
	words[i] = NULL;
	return (words);
}
