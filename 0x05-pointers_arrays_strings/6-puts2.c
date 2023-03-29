#include "main.h"
/**
*puts2 - print every other chracter of a string,
*starting up with the first character
*@str: the string to print
*Return : 0
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar ('\n');
}
