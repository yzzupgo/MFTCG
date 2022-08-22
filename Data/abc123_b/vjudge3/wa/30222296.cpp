#include<stdio.h>
#include<algorithm>
using namespace std;
int n[10];
int r[10];
int main(){
	int sum=0;
	for(int i=1;i<=5;i++){
		scanf("%d",&n[i]);
		r[i]=n[i]%10;
		n[i]=n[i]/10;
		sum+=(n[i]*10);
	}
	sort(r+1,r+6);
	for(int i=5;i>=1;i--){
		if(r[i]+r[i-1]<=10){
			r[i-1]=r[i]+r[i-1];
		}
		else{
			sum+=10;
			r[i]=0;
		}
	}
	if(r[1]!=0)sum+=r[1];
	printf("%d",sum);
	return 0;
}