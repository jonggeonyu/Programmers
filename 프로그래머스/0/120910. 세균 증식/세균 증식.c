#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) {
    int i = 0;
    while (i<t)
    {
        n *= 2;
        i++;
    }
    return n;
}