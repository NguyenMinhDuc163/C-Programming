#include<stdio.h>
	int main(){
	int chieu_rong,chieu_dai;
	scanf("%d%d",&chieu_rong,&chieu_dai);
	for(int i = 1; i <= chieu_dai; i++)printf("*");
	printf("\n");
	for(int k =1; k<chieu_rong; k++)
	{
		for(int i = 1; i <= k; i++)printf("~");
		for(int i=1; i<=chieu_dai; i++)printf("*");
		printf("\n");
	}
	
		return 0;	
	}


