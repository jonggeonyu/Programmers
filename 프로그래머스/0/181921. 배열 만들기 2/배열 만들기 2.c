#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int checker(int n)
{
    while (n > 0)
    {
        if (n%5 != 0)
            return 0;;
        n = n/10;
    }
    return 1;
}

int* solution(int l, int r) {
    int* answer = (int*)malloc(sizeof(int)*(r-l));
    
    while (checker(l) == 0)
        l++;
    
    if (l>r)
    {
        answer[0] = -1;
        return answer;
    }

    int i = 0;
    while (l<=r)
    {
        if (checker(l) == 1)
        {
            answer[i] = l;
            i++;
        }
        l++;
    }
    return answer;
}