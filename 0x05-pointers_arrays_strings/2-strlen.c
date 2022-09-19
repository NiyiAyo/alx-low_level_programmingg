#include "main.h"
/**
 * _strlen - Th function
 * @s : The poitner thinghy
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
