//当你在控制台运行程序时可以输入两个参数，他们会相加
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("%d\n",a+b);
    return 0;
}
