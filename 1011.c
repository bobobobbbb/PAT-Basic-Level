#include<stdio.h>
struct array
{
    long firstnum;
    long middlenum;
    long lastnum;
};

int main(void)
{
    int line;
    int i;
    char * True = "true";
    char * False = "false";

    scanf("%d", &line);
    while (getchar() != '\n')
        continue;
    struct array array1[line];
    //读取输入的数据    
    for (i = 0; i < line; i++)
    {
        scanf("%ld%ld%ld", &array1[i].firstnum, &array1[i].middlenum, &array1[i].lastnum);
        while (getchar() != '\n')
            continue;
    }
    for (i = 0; i < line; i++)
    {
        if (array1[i].firstnum + array1[i].middlenum > array1[i].lastnum)
            printf("Case #%d: %s\n", i + 1, True);
        else
            printf("Case #%d: %s\n", i + 1, False);
    }


    return 0;    
}