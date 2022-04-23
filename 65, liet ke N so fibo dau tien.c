#include<stdio.h>

	int main()
		{
			int N,f0=0,f1=1,fn;
			scanf("%d",&N);
			if(N==1) printf("0");
			if(N==2) printf("0 1");
			if(N>2)
			{
				printf("0 1 ");
				for(int i=3;i<=N;i++)
				{
					fn= f0+f1;
					f0=f1;
					f1=fn;
					printf("%d ",fn);
				}
			}
			
			return 0;
		}


