#include<stdio.h>
#include<math.h>
		
		int soNguyenTo(int a)	
		{
			for(int i=2;i<=sqrt(a);i++)	// do bai liet ke nen cho i o main len day % tim snt
			{
				if(a % i == 0)
				{
					return 0;
					break ;
				}
			}
			return 1;
		}	
		int main()
		{
			int N ;
			scanf("%d",&N);
			for(int i=2;i<=N;i++)
			{
				if(soNguyenTo(i) == 1) //kiem tra tung so i mot
				{
					printf("%d\n",i);
				}
			}
			return 0;
		}
