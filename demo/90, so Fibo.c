#include<stdio.h>

	long long Fibonacci (int a) // d? ki?u tra v? là ll vi f[a] se tang rat nhanh
		{
			long long f[100]={1,1}; // gan luon gia tri f[0],f[1] (theo de bai) khi khoi tao 
			for(int i=2;i<=a;i++)
				{
					f[i]=f[i-1]	+f[i-2]; 
				}
				return f[a]; 
			
		}
	int main()
		{
			int n,N;
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
			{
				scanf("%d",&N);
				printf("%lld\n",Fibonacci(N-1)); // xet so N-1 vi so phan tu mang bat dau tu 0 den n-1
			}
		 	  return 0;
		}
