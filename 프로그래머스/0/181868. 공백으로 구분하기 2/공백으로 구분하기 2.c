#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* my_string) {
    char** answer = (char**)malloc(sizeof(char*) * (strlen(my_string) + 1));
    char* str = (char*)malloc(strlen(my_string) + 1);
    strcpy(str, my_string);
    
    char* token = strtok(str, " ");
    int idx = 0;
    
    while (token != NULL) {
        answer[idx] = (char*)malloc(strlen(token) + 1);
        strcpy(answer[idx], token);
        idx++;
        token = strtok(NULL, " ");
    }
    
    free(str);
    return answer;
}