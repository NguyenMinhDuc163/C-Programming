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
			/* l�i t? gi� tr? cu?i c�ng v? d?n gi� tr? k d? t?o � tr?ng cho c�c s? kh�c ch�n v�o
			VD 12345 678 ch�n v�o 3 -> 123___45 */
			
			for(int i= m + n - 1; i >= k ; i--) // cho ch?y t? gi� tr? cu?i v? d?n gi� tr? k (gi� tr? c?n ch�n)
				{
					a[i] = a[i-n]; // g�n gi� tr? th? i v?i gi� tr? th? k
				}
				
			//b?t d?u g�n gi� tr? c?a m?ng B v�o m?ng A
			for(int i=k; i < k + n; i++) // cho ch?y t? k d?n gi� tr? K+n th�i
				{
					a[i] = b[i-k];					
				}
	
			
			for(int i=0;i<m+n;i++) // t�ng m + n l� s? m?ng to
				{
					printf("%d ",a[i]);
				}
		 	  return 0;
		}
