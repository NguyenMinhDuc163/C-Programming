#include<stdio.h>
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
						if(arr[i] % 2 == 0)
							printf("%d ",arr[i]);
					} 	
					printf("\n");	
			}
			
		 	  return 0;
		}


