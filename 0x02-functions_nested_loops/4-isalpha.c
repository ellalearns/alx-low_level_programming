#include <stdio.h>

int _isalpha(int c);

int main(void)
{
int a;
a = _isalpha('p');
putchar(a + '0');
return (0);
}

int _isalpha(int c)
{
if (c >= 97 && c<= 122)
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
