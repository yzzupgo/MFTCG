#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(obj) (obj).begin(), (obj).end()
#define bit(n) (1LL << (n))
typedef long long ll;
using namespace std;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int x,y;
cin>>x>>y;
int t = 0;
int res = 4*x-y;
if(res%2==0 and res>=0) {
cout<<"Yes";
}else {
cout<<"No";
}
return 0;
}
