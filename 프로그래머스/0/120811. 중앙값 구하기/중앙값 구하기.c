#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len) {
    int flag = array_len/2 + 1;
    int min;
    int i,j;
    int res, idx;
    for (i=0; i<flag; i++)
    {
        min = 1001;
        for (j=0; j<array_len; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                idx = j;
            }
        }
        res = min;
        array[idx] = 1001;
    }
    return res;
}