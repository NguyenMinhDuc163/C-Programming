#include<stdio.h>

	int main(){
		int N,i=0,n;
		scanf("%d",&n);
		for(;i<n;i++){
			scanf("%d",&N);
			int chan=0,sodu,le=0;
			for(;N!=0;N=N/10){
			sodu=N%10;
			if(sodu%2==0){
				chan++;
			}
			else
			{
				le++;
			}
		}
			printf("%d %d\n",le,chan);
		}
		
		
		return 0;	
	}

