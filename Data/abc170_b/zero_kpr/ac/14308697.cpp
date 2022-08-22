#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i = 0; i < n; ++i)
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
int x,y; cin >> x >> y;
for(int i = 0; i <= x; ++i){
if(2*i + 4*(x-i) == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
