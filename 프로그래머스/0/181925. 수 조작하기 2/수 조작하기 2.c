#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    int len = numLog_len;
    int i;
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    
    for (i=0;i<len;i++)
    {
        if ((numLog[i+1]-numLog[i]) == 1) answer[i] = 'w';
        else if ((numLog[i+1]-numLog[i]) == -1) answer[i] = 's';
        else if ((numLog[i+1]-numLog[i]) == 10) answer[i] = 'd';
        else answer[i] = 'a';
    }
    answer[i-1] = '\0';
    return answer;
}