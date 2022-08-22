#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vector<int>>;
#define rep(i,s,n) for(int i=(s);i<(int)(n);i++)
#define ll int64_t
#define all(v) v.begin(),v.end()
#define co(x) cout << (x) << endl
#define ci(x) cin >> (x)
int main(){
int a,b;cin>>a>>b;
if(a*2<=b && b<=a*4)co("Yes");
else co("No");
}
