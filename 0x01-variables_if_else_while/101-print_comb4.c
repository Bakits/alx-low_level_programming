#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Prints all possible combinations of two different digits,
*in ascending order, separated by a comma followed by a space.
*
*Return: Always 0.
*/
int main(void)
{
int d, p, q
for (d = '0'; d < '9'; d++)
{
for (p = d + 1; p < = '9'; p++)
{
for (q = p + 1; q < = '9'; q++)
{
if ((p != d) != q)
{
putchar(d);
putchar(p);
putchar(q);
if (d == '7' && p == '8')
continue;
purchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
