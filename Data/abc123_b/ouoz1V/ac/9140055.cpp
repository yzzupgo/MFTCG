#include<bits/stdc++.h>
using namespace std;

using ll=long long; 

void solve(){
	vector<int>a(5);
	for(int i=0; i<5; i++){
		cin>>a[i];
	}
	int minv=1000000;
	sort(a.begin(), a.end());
	do{
		int sum=0;
		for(int i=0; i<4; i++){
			sum+=a[i];
			sum=((sum+9)/10)*10;
		}
		sum+=a[4];
		minv=min(minv, sum);
	}while(next_permutation(a.begin(), a.end()));
	cout<<minv<<endl;
}

signed main(){
	//while(1)
	solve();
}