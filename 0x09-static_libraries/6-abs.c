#include <stdio.h>
#include "main.h"


/**
 * abs : just in case
 * _abs : checks the absolute value of an integer
 * @digit : integer value that will be checked for its absolute value
 * Return: returns the absolute value after printing it
*/
int _abs(int digit)
{

int abs_digit;

if (digit > 0)
{
return (digit);
}
else if (digit == 0)
{
return (0);
}
else
{
abs_digit = 0 - digit;
return (abs_digit);
}

}
