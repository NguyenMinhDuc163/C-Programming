#include<stdio.h>
	int main(){
		int a;
		scanf("%d",&a);
		for(int j=0;j<a;j++)
		{
			for(int i=0;i<a;i++)printf("*");
			printf("\n");			
		}
		return 0;	
	}

