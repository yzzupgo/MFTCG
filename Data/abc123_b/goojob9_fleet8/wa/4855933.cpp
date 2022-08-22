#include<stdio.h>
int main(){
	int a,b,c,d,e,n=9,i=1,t;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(n>a%10&&a%10!=0){n=a%10;}
	if(n>b%10&&b%10!=0){n=b%10;}
	if(n>c%10&&c%10!=0){n=c%10;}
	if(n>d%10&&d%10!=0){n=d%10;}
	if(n>e%10&&e%10!=0){n=e%10;}
	if(a%10==0&&b%10==0&&c%10==0&&d%10==0&&e%10==0&&n==9){n=0;i=0;}
	int A=1,B=1,C=1,D=1,E=1;
	if(a%10==0){A=0;}
	if(b%10==0){B=0;}
	if(c%10==0){C=0;}
	if(d%10==0){D=0;}
	if(e%10==0){E=0;}
	t=(a/10+b/10+c/10+d/10+e/10+A+B+C+D+E)*10+n;
	printf("\n%d",t);
	return 0;
}