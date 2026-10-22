#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int solution(int numbers[], size_t numbers_len) {
    qsort(numbers, numbers_len, sizeof(int), compare);
    
    int max1 = numbers[numbers_len - 1] * numbers[numbers_len - 2];
    int max2 = numbers[0] * numbers[1];
    
    return max1 > max2 ? max1 : max2;
}