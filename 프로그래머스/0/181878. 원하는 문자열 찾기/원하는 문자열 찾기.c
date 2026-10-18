#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int solution(const char* myString, const char* pat) {
    int len_str = strlen(myString);
    int len_pat = strlen(pat);
    
    if (len_str < len_pat) return 0;
    
    char* lower_str = (char*)malloc(len_str + 1);
    char* lower_pat = (char*)malloc(len_pat + 1);
    
    for (int i = 0; i < len_str; i++) lower_str[i] = tolower(myString[i]);
    lower_str[len_str] = '\0';
    
    for (int i = 0; i < len_pat; i++) lower_pat[i] = tolower(pat[i]);
    lower_pat[len_pat] = '\0';
    
    int result = strstr(lower_str, lower_pat) != NULL ? 1 : 0;
    
    free(lower_str);
    free(lower_pat);
    
    return result;
}