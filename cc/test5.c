//在控制台输入外部参数即可
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])
{
    int j = 0;
    int arry[argc-1];
    int S = 0;
    int n = 0;

    for(int i = 1;i < argc;i++)             //将输入的数列成一个数组
    {
        arry[j] = atoi(argv[i]);
        j++;
    }

    for(int p=0;p<j;p++)                    //计算和
    {
        S = S + arry[p];
    }

    if(S == ((argc-1)*(1+argc-1))/2)        //比对是否为排列
    {
        for(int o = 0; o < j; o++)          //计算逆序数
        {
            for(int r = o+1; r < j; r++)
            {
                if((arry[o] - arry[r]) > 0)
                {
                    n++;
                }
            }
        }
        if (n%2 != 0)                       //判断奇偶
        {
            printf("该排列逆序数为%d,为奇排列",n);
        }
        else
        {
            printf("改排列逆序数为%d,为偶排列",n);
        }
    }

    else
    {
        printf("请输入排列\n");
    }

    return 0;
}
