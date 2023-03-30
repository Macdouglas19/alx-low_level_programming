#include "main.h"
/**
*puts_half -prints the second half of a string
*@str: the string to print
*return : 0
*/
void puts_half(char *str)
{
int length = 0, i = 0;
while (str[length])
length++;
for (i = (length + 1) / 2; str[i]; i++)
_putchar(str[i]);
_putchar('\n');
}
