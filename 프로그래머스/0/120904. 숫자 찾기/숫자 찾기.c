#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int num, int k) {
    char str[20];
    sprintf(str, "%d", num);
    char target = k + '0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            return i + 1;
        }
    }
    return -1;
}