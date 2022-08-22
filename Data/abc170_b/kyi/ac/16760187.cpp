#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using pii = pair<int,int>;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define pb push_back
int main() {
int x,y; cin>>x>>y;
rep(i,x+1) rep(j,x+1) {
if(i*2+j*4==y&&i+j==x) {
cout<<"Yes\n";
return 0;
}
}
cout<<"No\n";
}
