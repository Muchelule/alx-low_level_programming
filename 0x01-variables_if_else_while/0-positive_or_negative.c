#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main-Determines if the number is positive,negative or zero
*
* return: always 0 (success)
*/

int Main void(){
    int n;
    srand(time(0));
    n = rand()-RAND_MAX/2;
    if(n>0)
    {
        printf("%d is positive\n",n);
    }
    else if(n==0)
    {
        printf("%d is zero\n",n);
    }
    else
    {
        printf("%d is negative\n",n);
    }
    return 0;
}