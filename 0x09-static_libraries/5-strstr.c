#include <stdio.h>
#include "main.h"

/**
 * _strstr - continue
 * @haystack: just thinking
 * @needle: tired of descriptions
 * Return: returns 0 always
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}

if (*p == '\0')
return (haystack);
}

return (0);
}
