#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers can go here */


/* betty style doc for main function goes below */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        /* my code for the project below */
	if ( n > 0 ) {
		printf("%d is positive\n", n); 
	}
	if ( n == 0 ){
	       printf("%d is zero\n", n);
	} 
	if (n < 0 ) {
		printf("%d is negative\n", n); 
	} 	
	return (0); 
} 
	
