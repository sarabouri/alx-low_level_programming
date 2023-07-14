#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/* your code goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
	printf("%d is positif\n",n ) }
	else if(n==0)
       	{printf("%d is zero\n",n ) }
	else ("%d is negative\n",n ) }

	return (0);
}
