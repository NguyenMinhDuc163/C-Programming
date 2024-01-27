#include<stdio.h>

	int tongCHuSo(int a)
		{
			int du,sum=0;
			for(;a>0;a/=10)
				{
					du=a%10;
					sum+=du;
				}
				return sum;;
		}
	int main()
		{
			int a,b;
			scanf("%d%d",&a,&b);
			if(tongCHuSo(a) <= tongCHuSo(b) )
				printf("%d %d",a,b);
			else
				printf("%d %d",b,a);
		return 0;
		}


