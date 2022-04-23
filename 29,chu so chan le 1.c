#include<stdio.h>

	int main(){
		int N,sodu,chan=0,le=0;
		scanf("%d",&N);
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
			printf("%d %d",le,chan);
		
		return 0;	
	}

