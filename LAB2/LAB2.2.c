#include<stdio.h>

//Not used the concept of Sieve of Eratosthenes
//You should try using Sieve of Eratosthenes (Check Sieve.c) 

int main(void)
{
int a, prime=0;
scanf("%d",&a);

if(a>1)
{
	for(int i=2; i<=a; i++)
	{
		int x=0;
		for(int j=1; j<=i; j++)
		{
			if(i%j==0)
			x++;
		}
		if(x==2)
		prime++;
	}
	printf("%d\n",prime);
}

else
	printf("0\n");

return 0;
}
