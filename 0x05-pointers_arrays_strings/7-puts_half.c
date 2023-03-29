#include "main.h"
void puts_half(char *str)
{
int length = 0, i = 0;
while (str[length])
length++;
for (i = (length + 1) / 2; str[i]; i++)
_putchar(str[i]);
_putchar('\n');
}
