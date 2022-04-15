#include<stdio.h>
#include<math.h>

	int main(){
		int n,j=0, N, i=2,count=0;
			scanf("%d",&n);
		for(;j < n; j++){
			scanf("%d",&N);
			if(N<2){
			printf("NO\n");
		}
		else{
			for(;i <= sqrt(N);i++){
				if(N % i == 0){
					count++;
				}
				
			}
			if(count == 0){
					printf("YES\n");
				}
				else{
					printf("NO\n");
				}
		}
		i=2; // ca 2 gia tri nay sau vong lap deu bi thay doi
		count=0;
		}
		
		return 0;
	}
