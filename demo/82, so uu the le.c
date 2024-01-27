#include<stdio.h>
	int sole(long long a)
		{
			if(a % 2 !=0)
				return 1;
			else
				return 0;
		}
	int uuTheLe(long long a)
		{
			int chan=0,le=0;
			for(;a>0;a/=10)
				{
					int num=0;
					num = a % 10;
					if(sole(num)==1)
						le++;
					else if (sole(num)==0)
						chan++;
				}
				if(le > chan)
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
					if(sole(N) && uuTheLe(N)) 
						printf("YES\n");
					else
						printf("NO\n");	
				}

		 	  return 0;
		}


