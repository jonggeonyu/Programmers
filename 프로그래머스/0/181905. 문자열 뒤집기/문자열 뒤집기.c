#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int s, int e) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(len + 1);
    strcpy(answer, my_string);
    
    while (s < e) {
        char temp = answer[s];
        answer[s] = answer[e];
        answer[e] = temp;
        s++;
        e--;
    }
    
    return answer;
}