#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int* answer = (int*)malloc(sizeof(int)*num_list_len);
    int i;
    int j = 0;
    for (i=0; i<num_list_len; i+=n)
    {
        answer[j] = num_list[i];  
        j++;
    }
    
    return answer;
}