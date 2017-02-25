#include<stdio.h>
int main(void)
{
    int i, j;
    int junk;

    while (scanf("%d%d", &i, &j) == 2)
    {
        if (j == 0)
        {
            continue;
        }
        printf("%d %d ", i * j, j - 1);
    }
    return 0;
}