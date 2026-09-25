#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int len = strlen(my_string);
    int i = 0;
    char* answer = (char*)malloc(sizeof(char)*len);
    while (len>=0)
    {
        answer[i] = my_string[len-1];
        i++;
        len--;
    }
    return answer;
}