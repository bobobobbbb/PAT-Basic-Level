#include<stdio.h>
#include<string.h> //提供strlen的原型
int main()
{
    int arraylen;
    int rm;
    
    scanf("%d%d", &arraylen, &rm);
    
    int sourcearray[arraylen];
    int tagetarray[arraylen];

    for (int i = 0; i <= arraylen; i++)
    {
        scanf("%d", &sourcearray[i]);
    }
    for (i = rm, int j = 0; i < arraylen; i++, j++)
    {
        tagetarray[j] = sourcearray[i];
    }
    for (i = 0, j++; i < rm; i++)
    {
        tagetarray[j] = sourcearray[i];
    }
    for (i = 0; i < arraylen; i++)
    {
        printf("%d ", tagetarray[i]);
    }

    return 0;
}