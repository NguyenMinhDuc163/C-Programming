#include<stdio.h>
	int prime[1000001];//  khai báo m?t m?ng ch?a giá tr? t?i da mà d? baì yêu c?u
	void sangSoNguyenTo()
		{

			for(int i=0;i<1000001;i++)
				prime[i]=1;             // gán all các giá tr? c?a m?ng a=1(có nghia là dúnglà snt )
			prime[0]=0,prime[1]=0;     //lo?i b?ng tay 2 giá tr? a0 vs a1 vì 0 và 1 không ph?i s? nguyên t?
	/*còn tu giá tr? a2 tr? di ta dung vong for d? lo?i
		 ch? c?n l?p t? 2 d?n can c?a s? l?n nh?t vì b?i d?u tiên ta ch?y là i*i
		 nên ch? c?n ch?y d?n 1000 là có th? lo?i du?c 1 tri?u r?i*/
		
			for(int i=2;i<=1000;i++) 
				{
					if(prime[i])
						{
		/*ch?y t? i*i mà không ch?y tu 2 *i vì các s? d?ng sau dã b? u?c c?a s? tru?c lo?i r?i
		VD 6=2.3 cac gia tri 2 da bi loai t? 2 roi*/
								{				    
							for(int j= i*i;j<1000001;j+=i) 
									prime[j]=0;
								}
						}
				}
				
		}
	int main()
		{
			int n;
			sangSoNguyenTo();// ta goi ham ra
			scanf("%d",&n);
			for(int i=0;i<=n;i++)
				{
					if(prime[i])
					printf("%d\n",i);
				}
		 	  return 0;
		}
