#include <stdio.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int k) {
    int* answer = (int*)malloc(arr_len * sizeof(int));
    
    for (size_t i = 0; i < arr_len; i++) {
        if (k % 2 != 0) {
            answer[i] = arr[i] * k;
        } else {
            answer[i] = arr[i] + k;
        }
    }
    
    return answer;
}