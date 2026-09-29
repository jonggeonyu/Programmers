#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int i;
    char* answer = (char*)malloc(sizeof(char)*(strlen(my_string)+1));
    for (i=0; i<strlen(my_string); i++)
    {
        if (my_string[i] >= 65 && my_string[i] <= 90)
            answer[i] = my_string[i] + 32;
        else
            answer[i] = my_string[i] - 32;
    }
    answer[i] = '\0';
    return answer;
}