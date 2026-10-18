#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* cipher, int code) {
    int len = strlen(cipher);
    int ans_len = len / code;
    
    char* answer = (char*)malloc(ans_len + 1);
    
    int idx = 0;
    for (int i = code - 1; i < len; i += code) {
        answer[idx++] = cipher[i];
    }
    answer[idx] = '\0';
    
    return answer;
}