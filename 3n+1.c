#include<stdio.h>

int main()
{
	int n,i = 0;
	scanf("%d",&n);
	do{
	if(n%2 == 1)
	{
		n = 3 * n + 1;
		i++;
	}
	if(n%2 == 0 )
	{
		n /=2;
		i++;
	}
	}
	while(n!=1)
	printf("%d",n);
}
