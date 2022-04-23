#include<stdio.h>
#include<math.h>
		
		int soNguyenTo(int a)	
		{
			for(int i=2;i<=sqrt(a);i++)
			{
				if(a % i ==0)
				{
					return 0;
				}
			}
			return 1;
		}	
		int main()
		{
			int N ,cnt=1;
			scanf("%d",&N);
			for(int i =2 ;cnt<=N;i++)// cung giong nhu bai truoc nhung them bien dem ca i va cnt deu chay
			{                           // o day la N de gioi han chu khong phai sqrt(N) nhu trong ham
				if(soNguyenTo(i)==1)
				{
					printf("%d\n",i);
					cnt++;
				}
			}
			return 0;
		}
