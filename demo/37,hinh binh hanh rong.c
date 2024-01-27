#include<stdio.h>
	int main(){
	int N;
	scanf("%d",&N);
	//tao dong dau tien
	for(int i=1;i<=N-1;i++)printf("~");
	for(int i=1;i<=N;i++)printf("*");
	printf("\n");
	//tao cac dong o giua theo quy luat
	for(int k=2;k<=N-1;k++) // N bat dau tu 2 vi hang dau ta da viet truoc roi ,K<N-1 vi hang cuoi ta da viet truoc nen chi con N-1 hang o giua
	{
		for(int i=1;i<=N-k;i++)printf("~");
		printf("*");
		for(int i =1;i<=N-2;i++)printf(".");
		printf("*\n");
	}

	//dong cuoi cungg chi co N dau *
	for(int i =1;i<=N;i++)printf("*");
		return 0;	
	}
