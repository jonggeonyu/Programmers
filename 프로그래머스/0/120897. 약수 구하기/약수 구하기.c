#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)malloc(sizeof(int)*n);
    int i;
    int j = 0;
    for (i=1; i<=n; i++)
    {
        if (n%i == 0)
        {
            answer[j] = i;
            j++;
        }
    }
    return answer;
}