#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* solution(int num_list[], size_t num_list_len) {
    qsort(num_list, num_list_len, sizeof(int), compare);
    
    size_t len = num_list_len - 5;
    int* answer = (int*)malloc(len * sizeof(int));
    
    for (size_t i = 0; i < len; i++) {
        answer[i] = num_list[i + 5];
    }
    
    return answer;
}