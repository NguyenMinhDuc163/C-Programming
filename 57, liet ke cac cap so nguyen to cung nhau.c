#include<stdio.h>
#include<math.h>
		
		int UCLN(int x, int y)
		{
			while(x != y)
			{
				if(x > y) x=x-y;
				else y=y-x;
			}
			return x;
		}
		
		int main()
		{
			int a,b;
			scanf("%d%d",&a,&b);
            // dong nay de in gia tri i
			for(int i=a ;i<b;i++)// can i<b thoi khong can = vì n?u bang co the se ra truong hop (a,a)
			{               
			    // dong nay de in gia tri j
				for(int j = a+1;j<=b;j++)
					if(UCLN(i,j)==1)
					{
						if(i<j)
						{
							printf("(%d,%d)\n",i,j);
						}
					}
							
			}
			return 0;
		}
