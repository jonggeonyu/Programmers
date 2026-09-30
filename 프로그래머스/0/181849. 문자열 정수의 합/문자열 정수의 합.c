#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* num_str) {
    int len = strlen(num_str);
    int sum = 0;
    int i = 0;
    while (i < len)
    {
        sum += num_str[i] - 48;
        i++;
    }
    return sum;
}