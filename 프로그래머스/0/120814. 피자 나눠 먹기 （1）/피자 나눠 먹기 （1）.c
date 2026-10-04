#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int a = n/7;
    int b = n%7;
    if (b > 0) return a+1;
    else return a;
}