#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    int* answer = (int*)malloc(sizeof(int)*(num2-num1+1));
    
    int i;
    int j=0;
    for (i=num1; i<=num2; i++)
    {
        answer[j] = numbers[i];
        j++;
    }
    return answer;
}