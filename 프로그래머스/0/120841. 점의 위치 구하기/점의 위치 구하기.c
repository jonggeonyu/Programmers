#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int dot[], size_t dot_len) {

    if (dot[0] > 0 && dot[1] > 0) return 1;
    else if (dot[0] > 0 && dot[1] < 0 ) return 4;
    else if (dot[0] < 0 && dot[1] < 0 ) return 3;
    else return 2;
}