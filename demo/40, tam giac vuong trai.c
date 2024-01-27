#include<stdio.h>
	int main(){
		int h;
		scanf("%d",&h);
		for(int k = 1;k<=h;k++)
		{
			for(int i=1;i<=k;i++)printf("*");
			printf("\n");
		}
		return 0;	
	}


