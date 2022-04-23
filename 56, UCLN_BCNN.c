#include<stdio.h>
#include<math.h>
		// chu y kieu du lieu vi day la so co 9 chu so
		// ? tai sao kieu doi ham BCNN thanh gt tra ve long long lai khong duoc phai doi all ve long long
		int UCLN(long long a ,long long b) 
		{
			while(a != b)
			{
				if(a > b) 
					a=a-b;
				else 
					b=b-a;
			}
			return a;
		}
		long long BCNN(long long a,long long b)
		{
			return (a*b)/(UCLN(a,b));
		}
		
		int main()
		{
			long long a,b;
			scanf("%lld%lld",&a,&b);
			printf("%lld\n%lld",UCLN(a,b),BCNN(a,b));
			return 0;
		}
