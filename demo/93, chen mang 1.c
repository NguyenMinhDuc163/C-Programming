#include<stdio.h>

	int main()
		{
			int a[100],b[100],m,n,k;
			scanf("%d",&m);
			scanf("%d",&n);
			for(int i=0;i<m;i++)
				{
					scanf("%d",&a[i]);
				}
			for(int i=0;i<n;i++)
				{
					scanf("%d",&b[i]);
				}
			scanf("%d",&k);
			/* lùi t? giá tr? cu?i cùng v? d?n giá tr? k d? t?o ô tr?ng cho các s? khác chèn vào
			VD 12345 678 chèn vào 3 -> 123___45 */
			
			for(int i= m + n - 1; i >= k ; i--) // cho ch?y t? giá tr? cu?i v? d?n giá tr? k (giá tr? c?n chèn)
				{
					a[i] = a[i-n]; // gán giá tr? th? i v?i giá tr? th? k
				}
				
			//b?t d?u gán giá tr? c?a m?ng B vào m?ng A
			for(int i=k; i < k + n; i++) // cho ch?y t? k d?n giá tr? K+n thôi
				{
					a[i] = b[i-k];					
				}
	
			
			for(int i=0;i<m+n;i++) // tông m + n là s? m?ng to
				{
					printf("%d ",a[i]);
				}
		 	  return 0;
		}
