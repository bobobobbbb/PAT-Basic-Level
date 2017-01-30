/* 害死人不偿命的3n+1猜想 */
#include<stdio.h>
int main(void)
{
    int counter = 0,i;

    printf("Enter a number:\n");
    scanf("%d", &i);
    while (i != 1)
    {
        if (i % 2 == 0)
        {
            i /= 2;
            counter++;
        }    
        else
        {   
            i = 3 * i + 1;
            counter++;
        }
    }
    printf("%d", counter);

    return 0;

}
