#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int odd = 0;
    int even = 0;
    int i = 0;
    int result = 0;
    while (i<num_list_len)
    {
        if (num_list[i]%2 != 0)
            odd = odd*10+num_list[i];
        else
            even = even*10+num_list[i];
        i++;
    }
    result = odd+even;
    return result;
}