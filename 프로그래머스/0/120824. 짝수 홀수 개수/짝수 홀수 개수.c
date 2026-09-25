#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(8);
    int even_count = 0;
    int odd_count = 0;
    
    for (int i=0; i<num_list_len; i++)
    {
        if (num_list[i]%2 == 0) even_count += 1;
        else odd_count += 1;
    }
    answer[0] = even_count;
    answer[1] = odd_count;
    return answer;
}