#include<stdio.h>
#include<math.h>

	int main(){
		int sotach,N, sum=0;
		scanf("%d",&N);
		for(;N!=0;)
		{
			sotach = N % 10;
			sum = sum + sotach;
			N = N/10;
		}
		printf("%d",sum);
	return 0;
	}

