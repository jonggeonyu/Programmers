#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int len1 = strlen(my_string);
    int len2 = strlen(is_suffix);
    int res = len2;
    
    int i=0;
    int idx;
    while (i<res)
    {
        if (my_string[len1-1] == is_suffix[len2-1])
        {
            i++;
            len1--;
            len2--;
        }
        else
        {
            return 0;
        }
    }
    return (i == res) ? 1 : 0;
}