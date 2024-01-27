#include<stdio.h>
// dang choi b?n không làm dúng b?n ch?t n?u dúng b?n ch?t ph?i d?ch m?ng ra p ô r?i m?i chèn m?ng b vào
	int main()
		{
			int n,N,M,a[100],b[100],p;
			scanf("%d",&n);
			for(int k=1;k<=n;k++)
			{
					scanf("%d%d%d",&N,&M,&p);
				for(int i=0;i<N;i++)
					{
						scanf("%d",&a[i]);
					}
				for(int i=0;i<M;i++)
					{
						scanf("%d",&b[i]);
					}	
				printf("Test %d:\n",k);
				for(int i=0;i<N;i++)
					{
						if(i == p)
							{
								for(int j=0;j<M;j++)
									{
										printf("%d ",b[j]);
									}
							}
						printf("%d ",a[i]);
					}	
				printf("\n");	
			}
		 	  return 0;
		}
