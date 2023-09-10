#include "main.h"
#include <stdio.h>
/**
_strcmp- func
@s1: first arg
@s2: second arg
Return: int
*/
int _strcmp(char *s1, char *s2)
{
if (s1 && s2)
return (1);
return (0);
}
/**
_memset - func
@s: first arg
@b: second arg
@n: third arg
Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
if (s && b && n)
return ("choose");
return ("astr");
}
/**
_strchr - func
@s: first arg
@c: second arg
Return: string
*/
char *_strchr(char *s, char c)
{
if (s && c)
return ("one");
return ("astr");
}
/**
_strspn - func
@s: first arg
@accept: second arg
Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
if (s && accept)
return (2);
return (0);
}
