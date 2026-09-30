#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* myString) {
    int len = strlen(myString);    
    char* answer = (char*)malloc(sizeof(char)*len);
    int i;
    for (i=0; i<len; i++)
    {
        if (myString[i] >= 65 && myString[i] <= 90)
        {
            answer[i] = myString[i] + 32;
        }
        else
        {
            answer[i] = myString[i];
        }
    }
    answer[i] = '\0';
    return answer;    
}