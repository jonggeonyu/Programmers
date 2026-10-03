#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int idx = 0;
    while (idx < num_list_len)
    {
        if (num_list[idx] < 0)
            break;
        idx++;
    }
    if (idx == num_list_len)
        return -1;
    return idx;
}