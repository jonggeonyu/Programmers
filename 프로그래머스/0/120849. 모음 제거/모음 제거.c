#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int len = strlen(my_string);    
    char* answer = (char*)malloc(sizeof(char)*len);
    int i = 0;
    int j = 0;
    while (my_string[i] != '\0')
    {
        if (my_string[i] == 'a' || my_string[i] == 'e' || my_string[i] == 'i' || my_string[i] == 'o' || my_string[i] == 'u')
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