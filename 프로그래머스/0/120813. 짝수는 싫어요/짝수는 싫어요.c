#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)malloc(sizeof(int)*(n/2+1));
    int i = 0;
    int j = 0;
    while (i<=n)
    {
        if (i%2 != 0)
        {
            answer[j] = i;
            j++;
        }
        i++;
    }
    return answer;
}