#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int sides[], size_t sides_len) {
    int max = sides[0];
    int sum = 0;
    
    for (size_t i = 0; i < sides_len; i++) {
        if (sides[i] > max) {
            max = sides[i];
        }
        sum += sides[i];
    }
    
    int rest_sum = sum - max;
    return (max < rest_sum) ? 1 : 2;
}