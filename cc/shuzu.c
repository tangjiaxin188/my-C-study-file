#include <stdio.h>
int main()
{
while (1){
int k;
printf("按1开始，按2退出\n");
scanf("%d",&k);
if (k==1){
	int i;
	int a[10];
	int p=0;
	for (i=0;i<10;i++)
	{
		printf("请输入第%d位同学的成绩：\n",i+1);
		scanf("%d",&a[i]);
	}

	for (i=0;i<10;i++)
	{
		p=a[i]+p;
	}

	int f = p/10;
	printf("总成绩为:%d,平均分为:%d\n",p,f);
}
else if (k==2){
	break;
}
else
{
	printf("请输入正确指令！\n");
}
}
	return 0;
}
