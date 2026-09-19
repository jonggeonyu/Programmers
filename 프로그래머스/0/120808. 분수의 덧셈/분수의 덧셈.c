#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int nu, int de) {
    
    int val = (nu > de) ? de : nu;
    
    while (!(nu%val == 0 && de%val == 0))
        val--;
    
    return val;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int* answer = (int*)malloc(sizeof(int)*2);
    int numer = numer1*denom2 + numer2*denom1;
    int denom = denom1*denom2;
    int n = gcd(numer, denom);
    numer /= n;
    denom /= n;
    answer[0] = numer;
    answer[1] = denom;
    return answer;
}