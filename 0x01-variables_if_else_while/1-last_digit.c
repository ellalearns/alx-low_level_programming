#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - last digit is the name
 * Return: 0 because i don't know
*/
int main(void)
{
	int n;
	int lastDigitOfN;
    lastDigitOfN = n%10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    

if (lastDigitOfN > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigitOfN);
}
if (lastDigitOfN == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigitOfN);
}
if (lastDigitOfN < 6 && lastDigitOfN != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigitOfN);
}
	return (0);
}
