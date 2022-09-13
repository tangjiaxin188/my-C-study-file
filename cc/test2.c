#include <stdio.h>
#include <stdarg.h>

int d(int n, ...);
//int jisuan(int x,int y);
//int p(int x,int y);
int d(int n, ...)
{
	int sum = 0;
	int i;\
	
	va_list dl;
	va_start(dl,n);
	
	for(i=0;i<n;i++)
	{
		sum += va_arg(dl,int);
	}
	
	va_end(dl);
	return sum;
}

int main()
{
	printf("%d",d(3,1,1,1));
	
	
	return 0;
}

/*

int jisuan(int x,int y)
{
	int jieguo = x + y;
	return jieguo;
}

int p(int x,int y)
{
	printf("123");
	return 10;
}
  
*/
