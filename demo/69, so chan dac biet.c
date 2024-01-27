#include<stdio.h>

	int sochan(long long a)
		{
			if(a % 2 == 0)
				return 1;
			else 
				return 0;
		}
	int ktTatCaChan(long long a)
		{
			int cnt =0,du;
			for(;a>0;a/=10)
				{
				if(a % 2 !=0)
					cnt++;	
				}
			return cnt;
		}
	
	int main()
		{
			long long N,n;
			scanf("%lld",&n);
			for(int i=1;i<=n;i++)
				{
					scanf("%lld",&N);
					if(sochan(N) && ktTatCaChan(N)==0)
						printf("YES\n");
					else
						printf("NO\n");					
				}

			return 0;
		}


