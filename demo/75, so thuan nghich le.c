#include<stdio.h>
#include<math.h>
	int soThuanNghich(long long a)
		{
			long long dao=0,n=a;
			for(;n>0;n/=10)	
			{
				dao = dao*10 + n%10;
			}
			if(dao==a)
				return 1;
			else
				return 0;
		}
	int tongLe(long long a)
		{
			long long sum=0;
			for(;a>0;a/=10)
				{
					sum += a%10;
				}
				if(sum % 2 ==0)
					return 0;
				else 
					return 1;
		}
	int chuSole(long long a)
		{
			long long count=0,chuso;
			for(;a>0;a/=10)
				{
					chuso=a%10;
					if(chuso % 2 == 0)
						count++;
						return count;
				}
			return count;
		}
	int main()
		{
			long long n,N;
			scanf("%lld",&n);
			for(int i=1;i<=n;i++)
				{
					scanf("%lld",&N);
					if(tongLe(N) && soThuanNghich(N) && chuSole(N)==0)
						printf("YES\n");
					else
						printf("NO\n");					
				}

		}


