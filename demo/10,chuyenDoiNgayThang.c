#include<stdio.h>
	int main(){
		int ngaynhap,nam,tuan,ngay;
		scanf("%d",&ngaynhap);
		if(ngaynhap > 0 && ngaynhap < 1000)
		{
		nam = ngaynhap / 365 ;
		tuan = (ngaynhap - nam*365)/7;
		ngay = ngaynhap - nam*365 - tuan*7 ;
		printf("%d %d %d",nam,tuan,ngay);
		}
		
		return 0;
	}

