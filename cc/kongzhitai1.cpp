#include <iostream>

int main()
{
	while (1)
	{
	int r;
	printf("输入1退出程序，输入2运行程序\n");
	scanf_s("%d", &r);
		if (r==2)
		{ 
			int number, z, e, i, b;
			i = 0;
			b = 0;
			printf("请输入起始数字:\n");
			scanf_s("%d", &number);
			getchar();
			printf("请输入结束数字:\n");
			scanf_s("%d", &e);
			printf("该范围内有以下质数:\n");
			for (number; number <= e; number++)
			{
				for (z = 2; z <= number; z++)
				{
					if (number % z == 0)
					{
						break;
					}
				}
				if (number == z)
				{
					i++;
					printf("%d:%d\t", i, number);
					if (i % 5 == 0)
					{
						printf("\n");
					}
				}
			}
			if (i != 0)
			{
				printf("该范围内有%d个质数\n", i);
			}
			else
			{
				printf("该范围内没有质数\n");
			}
		}
		if (r == 1)
		{
			break;
		}
	}
	return 0;
	
} 


/*
注释注释注释
注释注释注释
注释注释注释
*/