#include<bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define PII pair<int,int>
#define fi first
#define se second

int a[10];

bool cmp(int a,int b){
	int ta=a%10;if(ta==0)	ta=10;
	int tb=b%10;if(tb==0)	tb=10;
	return ta<tb;
}

void solve(){
	for(int i=0;i<5;i++)	cin>>a[i];
	sort(a,a+5,cmp);
	int res=a[0];
	for(int i=1;i<5;i++){
		if(a[i]%10)	res+=(a[i]/10+1)*10;
		else	res+=a[i];
	}
	cout<<res<<"\n";
}

int main(){
	IO
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}