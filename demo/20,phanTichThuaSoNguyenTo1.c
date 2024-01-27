#include<stdio.h>

	int main(){
		int N,i=2,j=0,n;
		scanf("%d",&n);
		for(;j<n;j++){
			scanf("%d",&N);
		while(N>1){
			if(N % i == 0){
				printf("%d ",i);
				N=N/i;
			}
			else{
				i++;
			}
		}
	
		printf("\n");
		i=2;// tai day gia tri cua i da thay doi khong con bang 2 nua nen gan lai gia tri cho i
		}
		
		return 0;
	}
