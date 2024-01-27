#include<stdio.h>
	int main(){
		int N,i=1,a;
		scanf("%d",&N);
		if(N >= 1 && N <= 9)
		for(;i<=10;i++)
		{
			a = N*i;
			printf("%d ",a);
		}
		return 0;
	}

