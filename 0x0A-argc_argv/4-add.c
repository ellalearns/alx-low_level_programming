#include "main.h"
#include <stdio.h>

int isvalid(char *s)
{
int len;
len = 0;

while (s[len])
{
if (s[len] < '0' || s[len] > '9')
{
return (0);
}
len++;
}

return (1);

}


int main(int argc, char *argv[])
{

int num;
int len;
int result;
int i;
len = 0;
result = 0;

if (argc == 1)
{
print("%d\n", 0);
return (1);
}

while (argv[len])
{
len++;
}

for (i = 1; i < len; i++)
{
if (isvalid(argv[i]) == 1)
{
num = myatoi(argv[i]);
result = result + num;
}
else
{
printf("Error\n");
return (1);
}

}

printf("%d\n", result);

return (0);

}
