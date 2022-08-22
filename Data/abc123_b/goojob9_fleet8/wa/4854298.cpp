#include<stdio.h>
int main(){
	int a,b,c,d,e,n,t;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	n=a%10;
	if(n>b%10){n=b%10;}
	if(n>c%10){n=c%10;}
	if(n>d%10){n=d%10;}
	if(n>e%10){n=e%10;}
	int A=1,B=1,C=1,D=1,E=1;
	if(a%10==0){A=0;}
	if(b%10==0){B=0;}
	if(c%10==0){C=0;}
	if(d%10==0){D=0;}
	if(e%10==0){E=0;}
	t=(a/10+b/10+c/10+d/10+e/10+A+B+C+D+E-1)*10+n;
	printf("\n%d",t);
	return 0;
}