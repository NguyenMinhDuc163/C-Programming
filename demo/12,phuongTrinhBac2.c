#include<stdio.h>
#include<math.h>
	int main(){
		float a,b,c,denta,x1,x2;
		scanf("%f%f%f",&a,&b,&c);
		if(a==0){
			if(b==0 && c!=0){
				printf("NO");
			}
			else if(b !=0 && c != 0){
				printf("%.2f",-c/b);
				
			}
			else if(b!=0 && c==0){
				printf("0");
			}
		}
		else{
			denta=b*b-4*a*c;
			if(denta < 0){
				printf("NO");
			}
			else if(denta == 0){
				printf("%.2f",-b/2*a);
			}
			else{
				x1= (-b + sqrt(denta))/(2*a);
				x2= (-b - sqrt(denta))/(2*a);
				printf("%.2f %.2f",x1,x2);
			}
		}
		return 0;	
	}

