#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int helper(int c, int d)
{
    int index = 1;
    while (index <= d)
        index *= 10;
    return c*index+d;
}
int solution(int a, int b) 
{
    return (helper(a, b)>2*a*b) ? helper(a,b) : 2*a*b;
}