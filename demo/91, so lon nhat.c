#include<stdio.h>
// kieu du lieu chi can int la du khong can long long
	int main()
		{
			int n,a[100],N,max;
			scanf("%d",&n);
			for(int j=0;j<n;j++)
				{
					scanf("%d",&N);
					for(int i=0;i<N;i++)
						{
							scanf("%d",&a[i]);
						}
					max=a[0];
					for(int i=0;i<N;i++)
						{
							if(a[i] > max)
								max = a[i];
						}
					printf("%d\n",max);
					for(int i=0;i<N;i++)
						{
							if(a[i]==max)
								printf("%d ",i);
						}
					printf("\n");			
				}
		 	  return 0;
		}
