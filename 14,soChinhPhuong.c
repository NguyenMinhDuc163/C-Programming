#include<stdio.h>
#include<math.h>

	int main(){
		int N,i=0;
		int a;
		scanf("%d",&N);
		for(;i<N;i++)
		{
			scanf("%d",&a);
			if(sqrt(a) == (int)sqrt(a))
			{
				printf("YES\n");
			}
			else
				{
					printf("NO\n");
				}
		}
	}

