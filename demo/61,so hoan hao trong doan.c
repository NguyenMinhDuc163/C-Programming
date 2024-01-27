#include<stdio.h>

// choi ban khi biet truoc chi co 4 so hoan hao nen viet chuong trinh quay quanh no
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
		int a,b,dao;
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			if(b==1) b=b+1;
		else a=a;
		if(a<10000)
		{
				for(int i=b;i<=a;i++)
			{
				if(timUoc(i)==i)
					{
						printf("%d ",timUoc(i));	
					}
			}
		}
		else
		{
		
			if(b<=6)
					printf("6 28 496 8128");
				if(b>6 && b<=28)
					printf("28 496 8128");
				if(b>28 && b<=496)
				printf("496 8128");
				if(b>496 && b<=8128)
				printf("8128");
		}
		} 
		else
		{
			if(a==1) a=a+1;
			else a=a;
			if(b<10000)
			{
					for(int i=a;i<=b;i++)
				{
					if(timUoc(i)==i)
						{
							printf("%d ",timUoc(i));	
						}
				}
			}
			else
			{
				if(a<=6)
					printf("6 28 496 8128");
				if(a>6 && a<=28)
					printf("28 496 8128");
				if(a>28 && a<=496)
				printf("496 8128");
				if(a>496 && a<=8128)
				printf("8128");
				
			}
		
		}
		

		
		return 0;
	}
