#include<stdio.h>
	int main(){
		int N;
		scanf("%d",&N);
		for(int k=0;k<N;k++)
		{
		for(int i=1;i<=N-1-k;i++)printf("~"); // dau tien in cac dau nga, ~ se giam dan tu N-1 ve 0
		for(int i=1;i<=N;i++)printf("*");       //sau do in N dau sao
		printf("\n");
		}
		return 0;	
	}
