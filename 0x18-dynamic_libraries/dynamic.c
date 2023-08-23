#include "main.h"

int _putchar(char c) {
return write(1, &c, 1);
}

int _islower(int c) {
return islower(c);
}

int _isalpha(int c) {
return isalpha(c);
}

int _abs(int n) {
return (n < 0) ? -n : n;
}

int _isupper(int c) {
return isupper(c);
}

int _isdigit(int c) {
return isdigit(c);
}

int _strlen(char * s) {
int length = 0;
while (*s) {
length++;
s++;
}
return length;
}

void _puts(char *s) {
while (*s) {
_putchar(*s);
s++;
}
_putchar('\n');
}

char *_strcpy(char *dest, char *src) {
char *dest_start = dest;
while (*src) {
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return dest_start;
}

int _atoi(char *s) {
int result = 0;
int sign = 1;
if (*s == '-') {
sign = -1;
s++;
}
while (_isdigit(*s)) {
result = result * 10 + (*s - '0');
s++;
}
return result * sign;
}

char *_strcat(char *dest, char *src) {
char *dest_end = dest + strlen(dest);
while (*src) {
*dest_end = *src;
dest_end++;
src++;
}
*dest_end = '\0';
return dest;
}

char *_strncat(char *dest, char *src, int n) {
char *dest_end = dest + strlen(dest);
while (*src && n > 0) {
*dest_end = *src;
dest_end++;
src++;
n--;
}
*dest_end = '\0';
return dest;
}

char *_strncpy(char *dest, char *src, int n) {
char *dest_start = dest;
while (*src && n > 0) {
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0) {
*dest = '\0';
dest++;
n--;
}
return dest_start;
}

int _strcmp(char *s1, char *s2) {
while (*s1 && (*s1 == *s2)) {
s1++;
s2++;
}
return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n) {
char *start = s;
while (n > 0) {
*s = b;
s++;
n--;
}
return start;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
char *dest_start = dest;
while (n > 0) {
*dest = *src;
dest++;
src++;
n--;
}
return dest_start;
}

char *_strchr(char *s, char c) {
while (*s) {
if (*s == c) {
return s;
}
s++;
}
return NULL;
}

unsigned int _strspn(char *s, char *accept) {
unsigned int count = 0;
while (*s && strchr(accept, *s)) {
count++;
s++;
}
return count;
}

char *_strpbrk(char *s, char *accept) {
while (*s) {
if (strchr(accept, *s)) {
return s;
}
s++;
}
return NULL;
}

char *_strstr(char *haystack, char *needle) {
size_t needle_len = strlen(needle);
while (*haystack) {
if (strncmp(haystack, needle, needle_len) == 0) {
return haystack;
}
haystack++;
}
return NULL;
}
