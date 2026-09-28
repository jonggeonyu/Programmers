#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i;
    for (i=1; i*i<=n; i++)
    {
        if (i*i == n)
            return 1;
    }
    return 2;
}