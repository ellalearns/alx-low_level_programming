#include <stdio.h>
#include "main.h"

/**
 * _islower - What's that?
 * Return 0, 1: because I said so
*/
int _islower(int c)
{

if (c < 97 || c > 122)
{
return (0);
}
else {
return (1);
}

}
