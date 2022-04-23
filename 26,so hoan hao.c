#include<stdio.h>

	int main(){
		int N,i=1,sum=0;
		scanf("%d",&N);
		for(;i<=(N/2);i++)
			{
				if(N%i==0){
					sum=sum+i;
				}	
			}
			if(sum == N){
				printf("%d",1);
			}
			else
			{
				printf("%d",0);
			}
		return 0;	
	}

