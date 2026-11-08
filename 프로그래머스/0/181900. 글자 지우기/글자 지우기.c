#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// indices_len은 배열 indices의 길이입니다.
char* solution(const char* my_string, int indices[], size_t indices_len) {
    int len = strlen(my_string);
    int remove_flag[101] = {0};
    
    for (size_t i = 0; i < indices_len; i++) {
        remove_flag[indices[i]] = 1;
    }
    
    char* answer = (char*)malloc(len - indices_len + 1);
    int idx = 0;
    
    for (int i = 0; i < len; i++) {
        if (remove_flag[i] == 0) {
            answer[idx++] = my_string[i];
        }
    }
    answer[idx] = '\0';
    
    return answer;
}