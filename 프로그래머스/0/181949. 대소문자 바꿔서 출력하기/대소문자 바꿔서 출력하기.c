#include <stdio.h>
#define LEN_INPUT 10
#include <ctype.h>

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

    int i = 0;
    while (s1[i])
    {
        char c;
        if (isupper(s1[i]))
        {
            c = tolower(s1[i]);
            printf("%c", c);
        }
        else
        {
            c = toupper(s1[i]);
            printf("%c", c);
        }
        i++;
    }
    
    return 0;
}
