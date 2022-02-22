#include<stdio.h>

int main()
{
	char c[5] = {'a','e','i','o','u'};
	char (*arr)[5];
	int i;
	arr=&c;
	for(i=0;i<5;i++)
	{
		printf("\n%c ",(*arr)[i]);
	}

}
