#include <bits/stdc++.h>
using namespace std;
 
#define rep(i,n) for(int i=0;i<n;i++)
 
int main(){
 
	vector<int> v(5);
	rep(i,5) scanf("%d", &v[i]);
	
	int min=9, ind=0;
	rep(i,5){
 
		if (v[i]%10!=0 and v[i]%10 <= min){
			min = v[i]%10;
			ind = i;
		}
	}
	int ans = v[ind];
	v.erase(v.begin()+ind);
 
	for (auto i : v){
		if (!(i%10)) ans += i;
		else ans += i + (10 -(i%10));
	}
 
	printf("%d\n", ans);
	return 0;
}