#include<stdio.h>
#include<stdio.h>

	int soNguyenTo(long long a)
	{
		for(int i=2;i<=sqrt(a);i++)
		{
			if(a%i == 0)
			{
				return 0;
			}
			
		}
		return 1;
	}	
		
	int soThuanNghich(long long a)
	{
		long long dao=0,n;
		n=a;
		for(; n>0; n/=10)
		{
			dao = dao*10 + n%10;
		}
		if(dao == a)
		{
			return 1;
		}else return 0;
	}
		
	int main()
		{
			int N;
			scanf("%d",&N);
			for(int j=1;j<=N;j++)
			{
				long long a,b;
				scanf("%lld%lld",&a,&b);
				int cnt =0;
				for(long long i=a;i<=b;i++)
				{
					if(soNguyenTo(i) && soThuanNghich(i))
					{
						if(cnt==10)
						{
							printf("\n");
							cnt=0;
						}
						printf("%lld ",i);
						cnt++;
					}
				}
				printf("\n\n");
			}

		return 0;
		}


