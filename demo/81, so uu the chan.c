#include<stdio.h>
	int soChan(long long a)
		{
			if(a % 2 ==0)
				return 1;
			else
				return 0;
		}
	int uuTheChan(long long a)
		{
			int chan=0,le=0;
			for(;a>0;a/=10)
				{
					int num=0;// khia bao num o trong vong for de khi lap lai gt num=0
					num = a % 10;
					if(soChan(num)==1)
						chan++;
					else if (soChan(num)==0)
						le++;
				}
				if(chan > le)
					return 1; 
				else
					return 0;
		}
	int main()
		{
			long long N,n;
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
				{
					scanf("%lld",&N);
					if(soChan(N)==1 && uuTheChan(N)==1) 
						printf("YES\n");
					else
						printf("NO\n");	
				}

		 	  return 0;
		}
