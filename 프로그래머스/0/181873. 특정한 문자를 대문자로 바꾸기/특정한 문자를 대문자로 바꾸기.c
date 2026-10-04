#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* alp) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*(len+1));
    int i;
    for (i=0; i<len; i++)
    {
        if (my_string[i] == alp[0])
            answer[i] = my_string[i] - 32;
        else
            answer[i] = my_string[i];
    }
    answer[i] = '\0';
    return answer;
}