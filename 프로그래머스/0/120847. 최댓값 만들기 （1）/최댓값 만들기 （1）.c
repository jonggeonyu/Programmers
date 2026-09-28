#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len) {
    int i,j;
    int max = numbers[0]*numbers[1];
    for (i=0; i<numbers_len-1; i++)
    {
        for (j=i+1; j<numbers_len; j++)
        {
            if (max < numbers[i]*numbers[j])
                max = numbers[i]*numbers[j];
        }
    }
    return max;
}