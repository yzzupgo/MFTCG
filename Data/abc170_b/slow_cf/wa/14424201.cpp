#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
int n , m;
cin >> n >> m;
int c = (m-2*n)/2;
if(2*c == m - 2*n && c<=n)
cout << "Yes\n";
else cout <<"No\n";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
solve();
return 0;
}
