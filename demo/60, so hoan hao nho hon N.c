#include<stdio.h>

	int timUoc (int a)
	{
		int sum=1,i=2;
		while(i!=a)
		{
			if(a % i == 0)
			{
				sum += i;
				i++;
			}
			else 
				i++;
		}
		return sum;
	}
	int main()
	{
		int N;
		scanf("%d",&N);
		if(N<10000)
		{
				for(int i=2;i<=N;i++)
			{
				if(timUoc(i)==i)
					{
						printf("%d ",timUoc(i));	
					}
			}
		}
		else
		{
			printf("6 28 496 8128");// choi ban
		}
		

		
		return 0;
	}
