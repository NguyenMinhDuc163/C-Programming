#include <stdio.h>
int main()
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(b==0)
			{
				printf("%d ",0);
			}
		else
			{
				printf("%d ",a+b);
				printf("%d ",a-b);
				printf("%d ",a*b);
				printf("%.2f ",1.0*a/b);
				printf("%d ",a%b);
			}
		return 0;
	}
	


