#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int n) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*(n+1));
    int i;
    int j=0;
    for(i=len-n; i<len; i++)
    {
        answer[j] = my_string[i];
        j++;
    }
    answer[j] = '\0';
    return answer;
}