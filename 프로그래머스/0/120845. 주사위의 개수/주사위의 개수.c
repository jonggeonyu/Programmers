#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int box[], size_t box_len, int n) {
    int a = box[0]/n;
    int b = box[1]/n;
    int c = box[2]/n;
    return a*b*c;
}