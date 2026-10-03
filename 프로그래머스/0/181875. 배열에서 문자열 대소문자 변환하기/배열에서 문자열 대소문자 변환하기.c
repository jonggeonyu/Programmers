#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char** solution(const char* strArr[], size_t strArr_len) {
    char** answer = (char**)malloc(sizeof(char*) * strArr_len);
    
    for (size_t i = 0; i < strArr_len; i++) {
        size_t len = strlen(strArr[i]);
        
        answer[i] = (char*)malloc(sizeof(char) * (len + 1));
        
        for (size_t j = 0; j < len; j++) {
            if (i % 2 == 0) {
                answer[i][j] = tolower(strArr[i][j]);
            } else {
                answer[i][j] = toupper(strArr[i][j]);
            }
        }
        
        answer[i][len] = '\0';
    }
    
    return answer;
}