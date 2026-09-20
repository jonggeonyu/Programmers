#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int k = 1;
    while (slice*k<n) k++;
    return k;
}