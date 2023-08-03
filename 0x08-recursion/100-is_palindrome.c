#include "main.h"

int str_len(char *s);
int check_palindrome(char *start, char *end);

/**
 * is_palindrome - help to check the input integer
 * @s: string to check
 * Return: result
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, s + str_len(s) - 1));
}

/**
 * str_len - check if a string is a palindrome
 * @s: the string
 * Return: result
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * check_palindrome - check if a string is palindrome
 * @start: start of the string
 * @end: exit point
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start != *end)
		return (0);
	return (check_palindrome(start + 1, end - 1));
}
