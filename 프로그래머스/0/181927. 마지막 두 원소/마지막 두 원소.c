#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    
    int len = num_list_len;
    int plus;
    int* answer = (int*)malloc(sizeof(int)*(len+2));
    if (num_list[len-1]>num_list[len-2])
        plus = num_list[len-1] - num_list[len-2];
    else
        plus = num_list[len-1]*2;
    
    int i = 0;
    while (i < len)
    {
        answer[i] = num_list[i];
        i++;
    }
    answer[i] = plus;
    answer[i+1] = '\0';
    return answer;
}