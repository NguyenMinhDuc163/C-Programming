#include<stdio.h>
	int main(){
		int a;
		scanf("%d",&a);
		for(int i=0;i<a;i++)printf("*");
			printf("\n");
		for(int j=0;j<a-2;j++)
		{
			printf("*");
			for(int i=0;i<a-2;i++)printf(".");
			printf("*");
			printf("\n");
		}
		for(int i=0;i<a;i++)printf("*");
		return 0;	
	}

