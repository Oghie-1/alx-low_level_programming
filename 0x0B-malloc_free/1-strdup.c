#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
/**
 * _strcpy - copies a string
 * @dest: destination string
 * @src: source string
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: pointer to the newly allocated memory containing the duplicate string
 */
char *_strdup(char *str)
{
char *new_str;
int len;
if (str == NULL)
{
return (NULL);
}
len = _strlen(str);
new_str = malloc(sizeof(char) * (len + 1));
if (new_str == NULL)
{
return (NULL);
}
_strcpy(new_str, str);
return (new_str);
}
