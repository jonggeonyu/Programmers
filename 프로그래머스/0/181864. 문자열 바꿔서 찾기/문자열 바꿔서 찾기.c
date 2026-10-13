#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(const char* myString, const char* pat) {
    char transformed[101];
    int i = 0;
    
    while (myString[i] != '\0') {
        if (myString[i] == 'A') transformed[i] = 'B';
        else if (myString[i] == 'B') transformed[i] = 'A';
        i++;
    }
    transformed[i] = '\0';
    
    if (strstr(transformed, pat) != NULL) {
        return 1;
    }
    
    return 0;
}