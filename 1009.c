#include<stdio.h>
#include<string.h>
char * s_gets(char *, int);
int main(void)
{
    char * str;
    int stringlen = 0;

    s_gets(str, 81);
    stringlen = srtlen(str);
    for (int i = stringlen - 1; i => 0; i--)
        putchar(str[i]);
    
    return 0;
}
char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while(st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
