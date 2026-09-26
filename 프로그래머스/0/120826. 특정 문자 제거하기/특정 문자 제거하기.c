#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* letter) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char)*len);
    int i = 0;
    int j = 0;
    while (my_string[i])
    {
        if (my_string[i] == letter[0])
        {
            i++;   
        }
        else
        {
            answer[j] = my_string[i];
            i++;
            j++;
        }
    }
    answer[j] = '\0';
    return answer;
}