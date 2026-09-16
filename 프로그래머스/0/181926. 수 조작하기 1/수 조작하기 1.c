#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int n, const char* control) {
    int len = strlen(control);
    int i;
    for (i=0; i<len; i++)
    {
        if (control[i] == 'w') n += 1;
        else if (control[i] == 's') n -= 1;
        else if (control[i] == 'd') n += 10;
        else n -= 10;
    }
    return n;
}