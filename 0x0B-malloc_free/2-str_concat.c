#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - count string characters
 * @s: array of elements
 * Return: length of string
 */
int _strlen(char *s)
{
unsigned int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
char *dst;
unsigned int i, j, size;
/* handle empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* calculate total size */
size = (_strlen(s1) + _strlen(s2) + 1);
/* allocate memory */
dst = (char *) malloc(size *sizeof(char));
if (dst == NULL)
{
return (NULL);
}
/* concatenate strings */
for (i = 0; s1[i] != '\0'; i++)
{
dst[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
dst[i] = s2[j];
i++;
}
dst[i] = '\0';
return (dst);
}
