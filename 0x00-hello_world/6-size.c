#include <stdio.h>

/**
* main - prints th size of various types 
* return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
printf("Size of a char: xd byte(s)/n", sizeof(char));
printf("Size of an int: xd byte(s)/n", sizeof(int));
printf("Size of a long int: xd byte(s)/n", sizeof(long int));
printf("Size of a long long int: xd byte(s)/n", sizeof(long long int));
printf("Size of afloat: xd byte(s)/n", sizeof(float));
return (0);
}

