#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len) {
    
    int max = 0;
    int count = 0;
    int answer;
    int arr[1000] = {0,};
    
    for (int i=0; i<array_len; i++)
        arr[array[i]] += 1;
    
    int j;
    for (j=0; j<1000; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            answer = j;
        }
    }
    
    int k;
    for (k=0; k<1000; k++)
    {
        if (arr[k] == max)
            count += 1;
    }
    
    if (count == 1) return answer;
    else return -1;
}