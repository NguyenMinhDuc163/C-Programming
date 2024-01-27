#include<stdio.h>

	int main(){
		int n,N,temp,socuoi,i=0;
		scanf("%d",&n);
		for(;i<n;i++)
		{
			scanf("%d",&N);
		socuoi = N % 10;
		for(;N>0;N = N / 10){
			temp = N % 10;
		}
		if(socuoi == temp){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		}
		
		
	return 0;
	}


