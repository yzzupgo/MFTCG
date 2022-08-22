#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007;
using P = pair<int,int>;
#define rep(i,n) for(int i = 0; i < n; i++)
#define all(x) (x).begin(),(x).end()
int main(){
int n,m;
cin >> n >> m;
if(2<=m/n && m/n<=4 && !(m%2)) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
