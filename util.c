#include <stdio.h>
#include "util.h"

void fraction_print(int numerator, int denominator)
{   
    if(numerator == 0)           // I added this if because 0/something is equal to 0.
    {                            // (I think this ouput form appears better than 0/something)
        printf("0");
    }
    else if(numerator % denominator == 0)       // I added this part for better output appearance.
    {                                           // If output is integer this code converts it integer form.
        printf("%d", numerator/denominator);
    }
    else
    {
        printf("%d//%d", numerator, denominator);
    }
}

void fraction_add(int n1, int d1, int n2, int d2, int *n3, int *d3)
{
    *n3 = n1 * d2 + n2 * d1;
    *d3 = d1 * d2;
    fraction_simplify(n3, d3);
}

void fraction_sub(int n1, int d1, int n2, int d2, int *n3, int *d3)
{
    *n3 = n1 * d2 - n2 * d1;
    *d3 = d1 * d2;
    fraction_simplify(n3, d3);
}

void fraction_mul(int n1, int d1, int n2, int d2, int *n3, int *d3)
{
    *n3 = n1 * n2;
    *d3 = d1 * d2;
    fraction_simplify(n3, d3);
}

void fraction_div(int n1, int d1, int n2, int d2, int *n3, int *d3)
{
    *n3 = n1 * d2;
    *d3 = n2 * d1;
    fraction_simplify(n3, d3);
}

void fraction_simplify(int *n, int *d)
{
    int i, small, start_point, nc, dc;

    nc = *n; dc = *d;

    // Firstly I converted inputs to positive because GCD does not depends on negativity 
    // or positivity.

    // 1- Abstraction 

    if(nc < 0){nc *= -1;}               
    if(dc < 0){dc *= -1;}

    // 2- Which is smaller ??? 
    
    //I need to know whic is smaller because I will regard from smaller one.

    if (nc > dc){small = dc;}                  
    else {small = nc;}

    // 3- GCD and Simplifying 

    for (i = small; i > 0; i--)               
    {
        if (*n % i == 0 && *d % i == 0)
        {
            *d /= i;                           
            *n /= i;
            break;
        }
    }

    // 4- Better Output Appearance

    // If output is (a // -b) this part of code converts it to (-a // b) or if output is (-a // -b)
    // this part of code converts it to (a // b).

    if( (*d<0 && *n<0) || (*d<0 && *n>=0) ) 
    {
        *n *= -1;
        *d *= -1;
    }
}
