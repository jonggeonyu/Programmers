#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* code) {
    int len = strlen(code);
    int mode = 0;
    int idx = 0;
    int i = 0;
    char* ret = (char*)malloc(sizeof(char)*len);
    while (idx<len)
    {
        if (mode == 0)
        {
            if (code[idx] != '1')
            {
                if (idx%2 == 0)
                {
                    ret[i] = code[idx];
                    i++;
                }
            }
            else
            {
                mode = 1;
            }
        }
        else if (mode == 1)
        {
            if (code[idx] != '1')
            {
                if (idx%2 != 0)
                {
                    ret[i] = code[idx];
                    i++;
                }
            }
            else
            {
                mode = 0;
            }
        }
        idx++;
    }
    ret[i] = '\0';
    if (ret[0] == '\0') return "EMPTY";
    return ret;
}