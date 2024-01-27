#include<stdio.h>

	int main(){
		int N, sotach,tich=1;
		scanf("%d",&N);
		for(;N!=0;){
			sotach = N % 10 ;
			tich = tich*sotach;
			N = N/10;
		}
		printf("%d",tich);
		
		return 0;
	}

