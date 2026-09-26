#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int s = n/10;
    int v = k-s;
    return n*12000+v*2000;
}