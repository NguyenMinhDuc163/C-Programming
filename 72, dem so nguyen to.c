#include<stdio.h>
#include<math.h>

	int soNguyenTo(int a)
		{
			int cnt=0;
			for(int i=2;i<=sqrt(a);i++)
				{
					if(a % i == 0)
						cnt++;
				}
			return cnt;
		}
	int tachSo(int a)
		{
			int chuSo,cnt=0;
			for(;a>0;a/=10)
				{
					chuSo=a % 10;// tách t?ng ch? ra m?t
					// do 1, 0 khong phai so nguyen to nen ph?i lo?i di
					if(chuSo ==1 || chuSo==0 ||soNguyenTo(chuSo)!=0)
						cnt++;
				}
				return cnt;
				
		}
	int main()
		{
			int n,a,b,cnt=0;
			scanf("%d",&n);
			for(int k=1;k<=n;k++)
			{
				scanf("%d%d",&a,&b);
				for(int i=a;i<=b;i++)
					{
						if(tachSo(i)==0 && soNguyenTo(i)==0)
						cnt++;
					}
				printf("%d\n",cnt);	
				cnt=0;		// sau 1 vong lap gan l?i gia tri bien d?m
			}


		 	  return 0;
		}
