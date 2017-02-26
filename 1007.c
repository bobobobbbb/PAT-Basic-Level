#include<stdio.h>
#include<stdbool.h>

bool isprime(int);
int main(void)
{
    int i;
    int primecount = 0;

    while ((scanf("%d", &i) != 1) || i > 100000)
    {
        printf("Error input.\n");
        printf("Try again:");
    }
    if (i % 2 == 0)
    {
        i--;
    }
    for (; i > 2; i -= 2)
    {
        if (isprime(i) && isprime(i - 2))
            primecount += 1;
        
    }
    printf("%d", primecount);

    return 0;
}
bool isprime(int x)
{
    int i = 2;
    bool flag = true;

    do
    {
        if ( x % i == 0)
        {
            flag = false;
            break;
        }
        i++;

    } while(i < x);

    return flag;
}