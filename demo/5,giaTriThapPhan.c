#include<stdio.h>

	int main(){
		int a,N,i=0;
		scanf("%d",&a);
		for(;i<a;i++)
		{
			scanf("%d",&N);
			if(N>0){
				printf("%.15f\n",(double)1/N);
			}
			
		}
		return 0;
	}

