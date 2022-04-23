#include<stdio.h>
	int UCLN (long long a, long long b)
		{
			long long du;
			while( a % b != 0) // dung thuat toan o clit
				{
					du = a % b;	
					a = b;
					b = du;
				}
			return b;
		}
	long long BCNN(long long a,long long b)// ki?u tra v? phai la long long vi so qua to
		{
			return (a*b)/UCLN(a,b);
		}
	int main()
		{
			long long n,a,b;
			scanf("%lld",&n);
			for(int i=1;i<=n;i++)
				{
					scanf("%lld%lld",&a,&b);
					printf("%lld %lld\n",BCNN(a,b),UCLN(a,b));					
				}

		 	  return 0;
		}
