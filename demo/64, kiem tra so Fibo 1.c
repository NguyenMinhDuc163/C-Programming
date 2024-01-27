#include<stdio.h>

	int Fibonacci(int a)
	{
		int f1=0,f2=1,tmp;// f1 f2 la hai gia tri dau tien cua day
		//tinh cac so FIBONACCI nh? hon a neu bang dung a thi a thuoc day FIBONACCI
		while(tmp<a) 
		{
			tmp = f1+f2;
			f1=f2;
			f2=tmp;
		}
		return tmp;
	}
	int main()
		{
			int N;
			scanf("%d",&N);\
			if(Fibonacci(N)==N)
			printf("1");
			else
			printf("0");
			return 0;
		}
