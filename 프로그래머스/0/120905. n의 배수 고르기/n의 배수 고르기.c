#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int numlist[], size_t numlist_len) {
    int* answer = (int*)malloc(sizeof(int)*numlist_len);
    int i;
    int j=0;
    for (i=0; i<numlist_len; i++)
    {
        if (numlist[i]%n == 0)
        {
            answer[j] = numlist[i];
            j++;
        }
    }
    
    return answer;
}