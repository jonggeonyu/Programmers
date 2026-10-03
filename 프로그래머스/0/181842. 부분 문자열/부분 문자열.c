#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* str1, const char* str2) {
    char* p = strstr(str2, str1);
    if (p == NULL) return 0;
    else return 1;
}