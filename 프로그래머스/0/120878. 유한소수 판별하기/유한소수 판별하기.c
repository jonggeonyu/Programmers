#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcb (int a, int b)
{
    int gcb = (a>b) ? b : a;
    while (!(a%gcb == 0 && b%gcb == 0)) gcb--;
    return gcb;
}

int solution(int a, int b) {
    int num = gcb(a,b);
    b /= num;
    while (b%2 == 0) b /= 2;
    while (b%5 == 0) b /= 5;
    return (b==1) ? 1 : 2;
}