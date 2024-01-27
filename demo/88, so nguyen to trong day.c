#include<stdio.h>
#include<math.h>
	int soNguyenTo(int a)
		{
			if(a <= 1)
				return 0;
			else
			{
				for(int i=2;i<=sqrt(a);i++)
				{
					if(a % i == 0)
						return 0;
				}
				return 1;
			}
			
		}
	int main()
		{
			int arr[100],n,N;
			scanf("%d",&n);
			for(int i=0;i<n;i++)
			{
				scanf("%d",&N);
				for(int i=0;i<N;i++)
					{
						scanf("%d",&arr[i]);
					}
				for(int i=0;i<N;i++)
					{
						if(soNguyenTo(arr[i])==1)
							printf("%d ",arr[i]);
					} 	
					printf("\n");	
			}
			
		 	  return 0;
		}


