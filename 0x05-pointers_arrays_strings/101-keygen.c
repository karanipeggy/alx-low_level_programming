iinclude "holberton.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*
*returns generates random valid passwords for the program 101-crackme
*/
int main(void)
{

srand(time(0));
int num = rand();
printf("%i\n",num);
return (0);
}
