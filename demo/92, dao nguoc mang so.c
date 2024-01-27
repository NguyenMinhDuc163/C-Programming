#include<stdio.h>
/*thuat toan : 1 2 3 4 5 thi can doi cho 2 lan
               1 2 3 4 5 6 thi can doi cho 3 lan
               ...  quy nap lai ta can doi cho n/2 lan(5/2=(int)2)   */
/* hoac co the su dung meo in nguoc mang for(int i=N-1;i>=0;i--)*/
	int main()
		{
			int a[100],N;
			scanf("%d",&N);
			for(int i=0;i<N;i++)
				{
					scanf("%d",&a[i]);
				}
			for(int i=0;i<N/2;i++)
				{
					int tmp = a[i];
					a[i]=a[N-1-i]; // N-1-i la so doi xung ung voi so dau
					a[N-1-i]=tmp;
				}
			for(int i=0;i<N;i++)
				{
					printf("%d ",a[i]);
				}
		 	  return 0;
		}
