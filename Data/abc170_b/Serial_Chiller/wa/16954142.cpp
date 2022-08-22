#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll x, y;
cin >> x >> y;
for (ll i = 0; i <= x; i++ ){
for (ll j = 0; j<= x; j++){
if(i*2 + j*4 == y){
cout << "Yes";
return ;
}
}
}
cout << "No";
}
int main()
{
solve();
cout << "\n";
}
