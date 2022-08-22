#include <bits/stdc++.h>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
	int a[5];
	rep(i,5) cin>>a[i];

	sort(a,a+5);

	int ans=500;
	do{
		int tmp=0;
		rep(i,4) tmp+=(a[i]%10==0?a[i]:(a[i]/10+1)*10);
		tmp+=a[4];
		ans=min(ans,tmp);
	}while(next_permutation(a,a+5));

	return 0;
}
