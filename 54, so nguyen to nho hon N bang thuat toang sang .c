#include<stdio.h>
	int prime[1000001];//  khai b�o m?t m?ng ch?a gi� tr? t?i da m� d? ba� y�u c?u
	void sangSoNguyenTo()
		{

			for(int i=0;i<1000001;i++)
				prime[i]=1;             // g�n all c�c gi� tr? c?a m?ng a=1(c� nghia l� d�ngl� snt )
			prime[0]=0,prime[1]=0;     //lo?i b?ng tay 2 gi� tr? a0 vs a1 v� 0 v� 1 kh�ng ph?i s? nguy�n t?
	/*c�n tu gi� tr? a2 tr? di ta dung vong for d? lo?i
		 ch? c?n l?p t? 2 d?n can c?a s? l?n nh?t v� b?i d?u ti�n ta ch?y l� i*i
		 n�n ch? c?n ch?y d?n 1000 l� c� th? lo?i du?c 1 tri?u r?i*/
		
			for(int i=2;i<=1000;i++) 
				{
					if(prime[i])
						{
		/*ch?y t? i*i m� kh�ng ch?y tu 2 *i v� c�c s? d?ng sau d� b? u?c c?a s? tru?c lo?i r?i
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
