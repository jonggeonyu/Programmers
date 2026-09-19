#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int is_ap(int arr[])
{
    if (arr[2]-arr[1] == arr[1]-arr[0])
        return 1;
    return 0;
}

int solution(int common[], size_t common_len) {
    int answer;
    
    if (is_ap(common) == 1)
    {
        int d = common[2] - common[1];
        answer = common[common_len-1] + d;
    }
    else
    {
        int ratio = common[2] / common[1];
        answer = common[common_len-1]*ratio;
    }
    return answer;
}