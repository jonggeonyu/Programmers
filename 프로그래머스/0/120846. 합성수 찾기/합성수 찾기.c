#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int helper(int n)
{
    int i;
    int count = 0;
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
            count += 1;
    }
    return (count >= 3) ? 1 : 0;
}

int solution(int n) {
    int count = 0;
    int i;
    for (i=4; i<=n; i++)
    {
        if (helper(i) == 1)
            count += 1;
    }
    return count;
}