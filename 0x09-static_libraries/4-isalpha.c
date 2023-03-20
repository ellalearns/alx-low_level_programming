#include <stdio.h>
#include "main.h"

/**
 * _isalpha - What's that?
 * @ c : what do you want to know
 * Return 0: because I said so
 * Return _isalpha: what?
 * Return 1: please go through. this is disgusting.
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
