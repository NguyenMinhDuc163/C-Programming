#include<stdio.h>
#include<math.h>

	int main(){
		int m,n,start,end,i,count=0;
		scanf("%d%d",&m,&n);
		start = sqrt(m);
		if( start*start != m){
			start = start +1;
		}
		i=start;
		end = sqrt(n);
		printf("%d\n",end-start+1); // lay cuoi tru dau la ra so luong
		for(;i <= end;i++)
			{
				printf("%d\n",i*i);
			}		
		return 0;	
	}
