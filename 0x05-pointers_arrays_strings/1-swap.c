#include "main.h"
/**
*swap_int -function that swap value of two int
*@a: - swap and store address of  b
*@b: - swap and store address of  a
*Return : Always 0
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
