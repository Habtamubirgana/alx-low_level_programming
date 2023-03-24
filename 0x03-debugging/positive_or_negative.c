#include "main.h"
/**
* positive_ or_negative
*
* @i:the number to be check
*
* Return: always 0
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
