#include <stdio.h>

/**
 * main - main function
 * Description: prints char below 10
 * Return: 0 when sucessful
 */

int main(void)
{
int a;

for (a = 0; a < 10; a++)

{
putchar(a + '0');
}
putchar('\n');

return (0);
}
