#include <stdio.h>

int main()
{
	
	int a = 10;
	int *p = &a;
	int *pp = &p;
	int **ppp = &p;
	printf("&a:%p,p:%p,&p:%p,pp:%p,ppp:%p\n",&a,p,&p,pp,ppp);
	//printf("pp:%d,ppp:%d\n",**pp,**ppp); --> it can run because it's wrong type. 2022-9-9
	int *pppp = *pp; //this right.
	printf("pp:%d,ppp:%d\n",*pppp,**ppp);
	
}
