#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int sum = 0;
    int i;
    for (i=0; i<arr_len; i++)
        sum += arr[i];
    
    int* answer = (int*)malloc(sizeof(int)*sum);
    
    int idx = 0;
    
    int j,k;
    for (j=0; j<arr_len; j++)
    {
        for (k=0; k<arr[j]; k++)
        {
            answer[idx] = arr[j];
            idx++;
        }
    }
    
    return answer;
}