#include<stdio.h>

	int main(){
		int n,i=0;
		scanf("%d",&n);
		for(;i<n;i++)
		{
			int sotach,N, sum=0;
			scanf("%d",&N);
		for(;N!=0;)
			{
			sotach = N % 10;
			sum = sum + sotach;
			N = N/10;
			}
			printf("%d\n",sum);
		}
		return 0;
	}

