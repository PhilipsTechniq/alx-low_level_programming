#include "main.h"
/**
 * wildcmp - Compare 2 strings
 * @s1: firs string to compare
 * @s2: second string to compare
 * Return: 1 if strings are same, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2))
			return (1);
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
