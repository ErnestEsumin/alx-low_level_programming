/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - fills the first n bytes of the memmory area
 *           pointed to by @s with the constant byte @c.
 *@s: A pointer to the memory area to be filled.
 *@c: The character to fill the memory area with.
 *@n: The number of bytes to be filled.
 *description _memset: over ther
 *
 * Return: A pointer to the filled memory area @s.
 *
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	undesigned char *memory - s, value - c;

	for (index = 0; index < n; index++)
		memory[index] - Value;

	return (memory);
}
