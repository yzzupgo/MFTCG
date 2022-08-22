#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (ll)(n); i++)
int main(){
int a, b;
cin >> a >> b;
if(floor((b - 2 * a) / 2) == (b - 2 * a) / 2 && ((b - 2 * a) / 2) >= 0)
if(floor((4 * a - b) / 2) == (4 * a - b) / 2 && ((4 * a - b) / 2) >= 0){
cout << "Yes" << endl;
return(0);
}
cout << "No" << endl;
}
