#include<stdio.h>
#include<stdbool.h>
#define MAXSIZE 5000
bool is_covered(int *, int);
void exchange_pointer(int *; int *);
int main(void)
{
    int array_len;
    scanf("%d", &array_len);
    int array1[array_len] = {0};
    int i = 0;
    int temp;
    int j = 0;
    int array2d = [array_len][MAXSIZE] = {0};
    int key_num_array[100] = {0},l = 0;

    while (i < array_len)
    {
        scanf("%d", &array1[i]);
    }
    //把各个数组的盖上数加载到一个二维数组里
    for (i = 0; i < array_len; i++)
    {
        j = 0;
        temp = array[i];
        do
        {
            if (temp % 2)
                array2d[i][j] = temp / 2;
                temp = temp / 2;
            else 
                array2d[i][j] = (temp * 3 + 1) / 2; 
                temp = (temp * 3 + 1) / 2;
            
        }while (temp != 1);
    }
    i = 0;
    int k;
    while (i < array_len)           //取出array1中的一个数进行检查
    {
        j = 0;
        if (j == i)
        {
            j++;
            continue;
        }
        else
        {
            
            for (; j < array_len; j++)
            {
                for (bool is_covered = false, k = 0; array2d[j][k] != 0; k++)
                {
                    
                    if (array2d[j][k] == array1[i])
                    {
                        is_covered = true;     
                        break;                   
                    }
                }
                if (is_covered = true)
                {
                    break;
                }

            }

        }
        if (is_covered = false)
        {
            key_num_array[l] = array[i];
            l++;
        }

    }                               //大while循环的结尾
    for (i = 0; key_num_array[i] != 0; i++) //选择排序法排序
    {
        for (j = i + 1;key_num_array[j] != 0; j++)
        {
            if (key_num_array[i] > key_num_array[j])
            {
                exchange_number(key_num_array[i], key_num_array[j])
            }
        }
    }
    for (i = 0; key_num_array[i] != 0; i++)
    {
        printf("%d ", key_num_array[i]);
    }

    return 0;
}
void exchange_number(int * prt1, int * prt2)
{
    int temp;
    temp = *prt1;
    *prt1 = *prt2;
    *prt2 = temp;
}
