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
		if(strong(N)==N)
			printf("1");
		else
			printf("0");
		return 0;
		}


