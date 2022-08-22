#include<bits/stdc++.h>
#define int long long
#define mp make_pair
#define pb push_back
#define S second
#define F first
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define IOS ios::sync_with_stdio(false),cin.tie(0);
#define pii pair<int,int>
#define endl cout<<'\n';
#define LINE cout << "-----------------------\n";
using namespace std;
const int maxn = 1e6+5;
signed main(){
IOS;
int x , y; cin >> x >> y;
for(int i=0 ; i<=1000 ; ++i){
if(2*i + (x-i)*4 == y) {
cout << "Yes\n";
return 0;
}
}
cout << "No\n";
}
