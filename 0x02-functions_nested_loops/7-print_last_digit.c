#include <stdio.h>
#include "main.h"

/**
 * print_last_digit : prints the last digit of a number
 * @number : parameter for this function
 * Return last_digit : last digit of number
*/
int print_last_digit(int number)
{
int mod_10;
int last_digit;
mod_10 = number%10;
if (mod_10 > 0)
{
last_digit = mod_10;
return (last_digit);
}
else if (mod_10 == 0)
{
last_digit = mod_10;
return (last_digit);
}
else if (mod_10 < 10)
{
last_digit = 0 - mod_10;
return (last_digit);
}
return (last_digit);
}
