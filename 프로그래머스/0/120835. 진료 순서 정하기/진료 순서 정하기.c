#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int emergency[], size_t emergency_len) {
    int* answer = (int*)malloc(sizeof(int)*emergency_len);
    
    int i,j;
    int max;
    int idx;
    int tmp = 1;
    for (i=0; i<emergency_len; i++)
    {
        max = 0;
        for (j=0; j<emergency_len; j++)
        {
            if (emergency[j] > max)
            {
                max = emergency[j];
                idx = j;
            }
        }
        answer[idx] = tmp;
        tmp++;
        emergency[idx] = 0;
    }
    return answer;
}