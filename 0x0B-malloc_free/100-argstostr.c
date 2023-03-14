#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k = 0, len = 0;
if (ac == 0 || av == NULL)
return (NULL);
/* calculate length of concatenated string */   
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++; /* account for space after each argument */
}
len++; /* account for terminating null byte */
/* allocate memory for concatenated string */
str = malloc(len * sizeof(char));
if (str == NULL)
return (NULL);
/* concatenate arguments */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = ' '; /* add space after each argument */
k++;
}
str[k] = '\0'; /* add terminating null byte */
return (str);
}
