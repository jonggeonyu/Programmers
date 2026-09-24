#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    int* answer = (int*)malloc(sizeof(int)*2);
    int cup = money / 5500;
    int rest = money - cup*5500;
    answer[0] = cup;
    answer[1] = rest;
    return answer;
}