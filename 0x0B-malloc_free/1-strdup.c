#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char*s)
{
unsigned int i = 0;

while (s[i] != '\0') /*count character of string*/
{
i++;
}
return i;
}

/**
 * _strcpy - copy arrays
 * @src: array of elements
 * @dest: dest array
 * Return: dest
 */

char *_strcpy(char*dest, char*src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = '\0';
i++;
}
dest[i] = '\0';

return (dest);
}

/**
 * _strdup - array for prints a string
 * * _strcpy - copy arrays
 * @str: array of elements
 * Return: pointer
 */

char *_strdup(char*str)
{
char *dst;
int len;

if (str == 0)
{
return (NULL);
}
len = _strlen(str);
dst = malloc(sizeof(char) * (len + 1));
if (dst == NULL)
{
return(NULL);
}
_strcpy(dst, str);
return (dst);
}
