#include<stdio.h>
	int main(){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a>0&&b>0&&a<1000000&&b<1000000)
		printf("%d\n%d\n%lld\n%d\n%d\n%.2f",a+b,a-b,(long long)a*b,a/b,a%b,(float)a/b);
		return 0;
	}

