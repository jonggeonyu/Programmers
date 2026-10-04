#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int a,b,c;
    a = hp/5;
    hp %= 5;
    b = hp/3;
    hp %= 3;
    c = hp;
    return a+b+c;
}