#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>




double recursion (double x, int n)
{
    printf("x:%4.1f n:%d\n",x,n);
    if( n == 0)
    {
        return 1;
    };

    if(n>0)
    {
        return x * recursion(x, n-1);
    };
}

int main()
{

    printf("### this is the pow() method from c ###\n%4.1f", pow(2.5,3));
    printf("\n### this is the pow() method from c ###\n%4.1f", pow(3,0));
    printf("\n### this is my mehtod for n=0, and n>0\n");
    printf("\nThis is my value :\n%4.1f", recursion(2.5,3));
    printf("\nThis is my value  :\n%4.1f\n", recursion(3,0));
    return 0;

}