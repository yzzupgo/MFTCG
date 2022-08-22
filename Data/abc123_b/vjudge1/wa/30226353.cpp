#include<stdio.h>
#include<algorithm>
using namespace std;
int a[5];
int main(){
	for(int i=1;i<=5;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+6);
	int sum=0;
	for(int i=5;i>1;i--){
		if(a[i]%10!=0)sum+=(a[i]/10*10+10);
		else sum+=a[i];
	}
	sum+=a[1];
	printf("%d",sum);
	return 0;
} 