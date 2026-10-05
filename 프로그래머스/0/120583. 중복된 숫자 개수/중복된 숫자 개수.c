#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len, int n) {
    int count = 0;
    int i;
    for (i=0; i<array_len; i++)
    {
        if (array[i] == n)
            count += 1;
    }
    return count;
}