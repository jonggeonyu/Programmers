#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* my_string) {
    int answer = 0;
    int i = 0;
    while (my_string[i] != '\0')
    {
        if (my_string[i] >= 48 && my_string[i] <= 57)
        {
            answer += my_string[i] - 48;
        }
        i++;
    }
    return answer;
}