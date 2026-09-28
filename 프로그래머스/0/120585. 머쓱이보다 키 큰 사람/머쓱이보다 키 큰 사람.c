#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len, int height) {
    int answer = 0;
    int i = 0;
    while (i<array_len)
    {
        if (array[i] > height)
            answer += 1;
        i++;
    }
    return answer;
}