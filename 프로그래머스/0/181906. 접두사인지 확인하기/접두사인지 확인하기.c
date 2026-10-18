#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* is_prefix) {
    int len_prefix = strlen(is_prefix);
    
    if (strlen(my_string) < len_prefix) return 0;
    
    return strncmp(my_string, is_prefix, len_prefix) == 0 ? 1 : 0;
}