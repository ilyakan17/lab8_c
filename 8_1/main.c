#include <stdio.h>
#include "8.h"

int main()
{
    char s[100];
    char t[100];

    printf("Enter s: ");
    scanf("%s", s);

    printf("Enter t: ");
    scanf("%s", t);

    int result = strend(s, t);

    if (result == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
