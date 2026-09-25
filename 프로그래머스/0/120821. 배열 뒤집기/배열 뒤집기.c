#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(sizeof(int)*num_list_len);
    int i = 0;
    while (num_list_len)
    {
        answer[i] = num_list[num_list_len-1];
        i++;
        num_list_len--;
    }
    return answer;
}