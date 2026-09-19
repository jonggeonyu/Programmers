#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* number) {
    int len = strlen(number);
    int i;
    int sum = 0;
    for (i=0; i<len; i++)
    {
        sum += (int)number[i] - 48;
    }
    sum %= 9;
    return sum;
}