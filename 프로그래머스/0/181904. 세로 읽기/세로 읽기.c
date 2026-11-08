#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int m, int c) {
    int len = strlen(my_string);
    int rows = len / m;
    
    char* answer = (char*)malloc(rows + 1);
    
    int idx = 0;
    for (int i = c - 1; i < len; i += m) {
        answer[idx++] = my_string[i];
    }
    answer[idx] = '\0';
    
    return answer;
}