#include<stdio.h>
#include<math.h>
	int soThuanNghich(int a)
		{
			int dao=0,n=a;
			for(;n>0;n/=10)	
			{
				dao = dao*10 + n%10;
			}
			if(dao==a)
				return 1;
			else
				return 0;
		}
	int tongChia10(int a)
		{
			int sum=0;
			for(;a>0;a/=10)
				{
					sum += a%10;
				}
				if(sum % 10 ==0)
					return 1;
				else 
					return 0;
		}
	int khongSo4(int a)
		{
			int count=0,chuso;
			for(;a>0;a/=10)
				{
					chuso=a%10;
					if(chuso==4)
						{
							count++;
							return count;
						}
				}
			return count;
		}
	int main()
		{
			int n,N;
			scanf("%d",&n);
			for(int j=1;j<=n;j++)
				{
					scanf("%d",&N);
					for(int i=pow(10,N-1);i<pow(10,N);i++)
						{
							if(khongSo4(i)==0 && soThuanNghich(i) && tongChia10(i))	
								printf("%d ",i);
						}
					printf("\n");				
				}


		 	  return 0;
		}


