#include<stdio.h>
	
	int giaiThua(int a)
	{
		int gt=1;
		for(int i=1;i<=a;i++)
		{
			gt*=i;
		}
		return gt;
	}
	int strong(int a)
	{
		int sotach,sum=0;
		for(;a!=0;a/=10)
		{
			sotach = a % 10;
			sum += giaiThua(sotach);
		}
		return sum;
		
	}

	int main()
		{
		int N;
		scanf("%d",&N);
		for(int i=1;i<=N;i++)
		{
			if(strong(i)==i)
			printf("%d ",i);
		}
			
		return 0;
		}


