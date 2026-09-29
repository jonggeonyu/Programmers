#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* strlist[], size_t strlist_len) {
    int* answer = (int*)malloc(sizeof(int)*strlist_len);
    int i,j;
    for (i=0; i<strlist_len; i++)
    {
        for (j=0; strlist[i][j] != '\0'; j++)
        answer[i] = j+1;
    }
    return answer;
}