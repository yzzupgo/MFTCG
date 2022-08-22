#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<(n);++i)
const int mod=1000000007;
const int mod1=998244353;
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
int a,b;cin >> a >> b;
if(a>12) cout << b << endl;
else if(b>5) cout << b/2 << endl;
else cout << 0 << endl;
}
