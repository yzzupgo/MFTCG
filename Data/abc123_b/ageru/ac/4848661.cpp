#include <bits/stdc++.h>
using namespace std;
int main(){
	int n = 5;
	vector<int> vec(n, 0);
	for(int i = 0; i < n; ++i)cin>>vec[i];
	int t, r;
	r = 0;
	t = 0;
	for(int i = 0; i < n; ++i){
		if(vec[i] % 10 == 0){
			t += vec[i];
		}
		else{
			int x = (10 - (vec[i] % 10));
			r = max(r, x);
			t += vec[i] + x;
		}
	}
	cout<<t - r<<endl;
	return 0;
}
