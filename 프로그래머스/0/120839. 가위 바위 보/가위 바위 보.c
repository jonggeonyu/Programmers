#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* rsp) {
    int len = strlen(rsp);
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    int i;
    for (i=0; i<len; i++)
    {
        if (rsp[i] == '0') answer[i] = '5';
        else if (rsp[i] == '2') answer[i] = '0';
        else answer[i] = '2';
    }
    answer[i] = '\0';
    return answer;
}