#include<stdio.h>
	int main(){
	int chieu_rong,chieu_dai;
	scanf("%d%d",&chieu_rong,&chieu_dai);
	//dong dau
	for(int i=1;i<=chieu_dai;i++)printf("*");
	printf("\n");
	//phan than co quy luat
	for(int k=1;k<=chieu_rong-2;k++) // do da viet dong dau dong cuoi nen phia tru di 2
	{
		for(int i=1;i<=k;i++)printf("~");
		printf("*");
		for(int i=1;i<=chieu_dai-2;i++)printf(".");// tru 2 la do 2 dau * o hai ben
		printf("*\n");
	}
	//dong cuoi
	for(int i=1;i<=chieu_rong-1;i++)printf("~"); // cho nay phai lay chieurong -1 vi hinh binh hanh nay cac canh khong bang nhau
	for(int i=1;i<=chieu_dai;i++)printf("*");
		return 0;	
	}
