#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod=1000000007;
const ll inf=1e18;
int main(){
ll a,b;
cin >> a >> b;
if(a<7)cout << 0 << endl;
else if(a<13)cout << b/2 << endl;
else cout << b << endl;
}
