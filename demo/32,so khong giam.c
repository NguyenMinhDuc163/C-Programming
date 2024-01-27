#include<stdio.h>
// so khong qua 18 chu so dung long long cho chac
	int khongtang(long long N)
	{
		long long a,b,count=0;
			a = N % 10;// tim duoc so cuoi
			N/=10;
			for(;N>0;N/=10)
			{
				b = N % 10;
				if(a < b)// so sanh voi so tiep theo neu no lon hon la sai
					count++;
				a=b;// gan a lai cho b de quay ra so khac
			}
			return count;
			
	}
	int main()
		{
			long long n,N,a,b;
			scanf("%lld",&n);
			for(int i=1;i<=n;i++)
			{
				scanf("%lld",&N);
				if(khongtang(N) == 0)
					printf("YES\n");
				else
					printf("NO\n");
			}
			
			return 0;
		}
