#include<bits/stdc++.h>
#define ll long long int
#define vll vector<ll>
using namespace std;
int main(){
ios_base::sync_with_stdio(NULL);
cin.tie(NULL);
ll x, y, a, b;
cin >> x >> y;
string ans = "No";
for(ll a=0; a<=x; a++){
b = x-a;
if(2*a + 4*b == y){
ans = "Yes";
break;
}
}
cout << ans << endl;
return 0;
}
