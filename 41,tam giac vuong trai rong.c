#include<stdio.h>
	int main(){
		int h;
		scanf("%d",&h);
		//phan dinh va canh duoi dinh
		printf("*\n**\n"); //  may tinh khong kiem tra truong hop 0 1
		//phan than co quy tac
		for(int k =1;k<=h-2-1;k++)// -2dong dau ,-1 dong cuoi
		{
			printf("*");
			for(int i=1;i<=k;i++)printf(".");
			printf("*\n");
		}
		//phan duoi
		for(int i = 1;i<=h;i++)printf("*");
		return 0;	
	}
