#include<stdio.h>

	int UCLN ( int a,int b)
		{
			while(a!=b)
				{
				if(a>b)
					a=a-b;
				else
					b=b-a;
				}	
			return a;
		}

	int main()
		{
			int n,a,b,c,d;
				scanf("%d",&n);
			for(int i=1;i<=n;i++)
				{
					scanf("%d%d%d%d",&a,&b,&c,&d);
					if(UCLN(a,b)==UCLN(c,d))
						printf("YES\n");
					else
						printf("NO\n");
				}			
			
		 	  return 0;
		}


