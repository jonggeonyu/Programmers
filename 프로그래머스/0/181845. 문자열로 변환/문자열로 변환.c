#include <stdio.h>
#include <stdlib.h>

char* solution(int n) {
    char* answer = (char*)malloc(sizeof(char) * 12);
    
    sprintf(answer, "%d", n);
    
    return answer;
}