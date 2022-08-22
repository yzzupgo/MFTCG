#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
ll x, y;
cin >> x >> y;
for (ll i = 0; i <= 100; i++ ){
for (ll j = 0; j<= 100; j++){
if(i+j != x) continue;
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
