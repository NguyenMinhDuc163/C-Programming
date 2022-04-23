#include<stdio.h>

	int main()
		{
			int a[100],n,N;
			scanf("%d",&n);
			for(int i=0;i<n;i++)
				{
					int count=0;
					scanf("%d",&N);
					for(int i=0;i<N;i++)
						{
							scanf("%d",&a[i]);
						}
					for(int i=0;i<=N/2;i++)
						{
							if(a[i]!=a[N-1-i])
								count++;
						}
							if(count == 0)
								printf("YES\n");
							else
								printf("NO\n");
				}
			
		 	  return 0;
		}


