#include <stdio.h>
#include <string.h>

int strend(char *s, char *t)
{
    int s_len = strlen(s);
    int t_len = strlen(t);

    if (t_len > s_len)
    {
        return 0; 
    }

    char *s_end = s + (s_len - t_len); 

    return strcmp(s_end, t) == 0;
}