#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    int* answer = (int*)malloc(sizeof(int)*num);
    int mid_val = total/num;
    int front_val;
    if (total%num == 0)
    {
        front_val = mid_val - (num/2);
        for (int i=0; i<num; i++)
        {
            answer[i] = front_val;
            front_val++;
        }
    }
    else
    {
        front_val = mid_val - (num/2 - 1);
        for (int i=0; i<num; i++)
        {
            answer[i] = front_val;
            front_val++;
        }
    }
    return answer;
}