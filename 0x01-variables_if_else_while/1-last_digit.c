#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
* main- Prints the last digit of randomly generated number
* and whether greater than 5, less than 6 or 0
* return: always 0
*/

int main void()
{
    int n;
    srnad(time());
    n = rand()-RAND_MAX/2;
    if((n%10)>5)
    {
        printf("The last digit of %d is %d and is greater than 5\n",n,n %10);
    }
    else if((n%10)<6 && (n%10)!=0)
    {
        printf("The last digit of %d is %d is less than 6 and not equal to 0",n,n %10);
    }
    else
    {
        printf("The last digit of %d is %d and is 0\n",n,n %10);
    }
    return 0;    
}

