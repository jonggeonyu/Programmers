#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {
    int* stk = (int*)malloc(sizeof(int)*arr_len);
    int s_len = 0;
    int i = 0;
    
    while (i < arr_len)
    {
        if (s_len == 0)
        {
            stk[s_len] = arr[i];
            i++;
            s_len++;
        }
        else
        {
            if (stk[s_len-1] < arr[i])
            {
                stk[s_len] = arr[i];
                i++;
                s_len++;
            }
            else
            {
                s_len--;
            }
        }
    }
    return stk;
}