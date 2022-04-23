#include<stdio.h>

		int tongchia10 (int a)
		{
			int sum=0,du;
			for(;a!=0;a/=10)
			{
				du = a % 10;
				sum+=du;
			}
			return sum;
		}
		int main()
		{
			int n,a;
			scanf("%d",&n);
			for(int i =0;i<n;i++)
			{
				scanf("%d",&a);
				if(tongchia10(a) % 10 == 0)printf("YES\n");
				else printf("NO\n");
			}
		
			
			return 0;
		}
		

