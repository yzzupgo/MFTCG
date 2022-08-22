#include<stdio.h>
#include<algorithm>
using namespace std;
int a[6];
bool cmp(int a,int b){
	if(a%10==0)return false;
	if(b%10==0)return true;
	return (a%10)<(b%10);
}
int main(){
	for(int i=1;i<=5;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+6,cmp);
	int sum=0;
	for(int i=5;i>1;i--){
		if(a[i]%10!=0) sum+=(a[i]/10*10+10);
		else sum+=a[i];
	}
	sum+=a[1];
	printf("%d",sum);
	return 0;
} 