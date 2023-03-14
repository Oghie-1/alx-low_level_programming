#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * count_words - count the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int count_words(char *str)
{
int words = 0, i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
words++;
}
return (words);
}

/**
 * word_len - count the length of a word in a string
 * @str: the string to count the word length in
 *
 * Return: the length of the word
 */
int word_len(char *str)
{
int len = 0;
while (str[len] != ' ' && str[len] != '\0')
len++;
return (len);
}

/**
 * strtow - split a string into words
 * @str: the string to split
 *
 * Return: an array of strings (words)
 */
char **strtow(char *str)
{
char **strings;
int index = 0, words, w, letters, i;
if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);
strings = malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);
for (w = 0; w < words; w++)
{
while (str[index] == ' ')
index++;
letters = word_len(str + index);
strings[w] = malloc(sizeof(char) * (letters + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);
}
for (i = 0; i < letters; i++)
strings[w][i] = str[index++];
strings[w][i] = '\0';
}
strings[w] = NULL;
return (strings);
}
