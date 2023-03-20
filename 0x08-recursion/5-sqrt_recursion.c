#include "main.h"
#include <stdio.h>

/**
 * findSum - find the natrual square root of a number
 * @digitsum: the number
 * Return: int
*/
int findSum(int digitsum)
{
int temp;
int m;
int result;
if (digitsum < 10)
{
return digitsum;
}
else
{
m = digitsum%10;
temp = digitsum/10;
result = m + findSum(temp);
return findSum(result);
}
}

/**
 * nsr - find the natrual square root of a number
 * @x: the number
 * @y: another int
 * Return: int
*/
int nsr(int x, int y) {
x = x - y;
if (x < 0) {
return 0;
}
else if (x == 0) {
return 1;
}
else {
return (1 + nsr(x, y + 2));
}
}

/**
 * _sqrt_recursion - find the natrual square root of a number
 * @n: the number
 * Return: int
*/
int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}

else if (n == 0)
{
return (0);
}

else
{
if (n % 10 == 0 || n % 10 == 1 || n % 10 == 4 || n % 10 == 5 || n % 10 == 6 || n % 10 == 9)
{

int sum;

sum = findSum(n);

if (sum == 1 || sum == 4 || sum == 7 || sum == 9)
{

return (nsr(n, 1));

}

else
{
return (-1);
}


}

else
{
return (-1);
}
}

}
