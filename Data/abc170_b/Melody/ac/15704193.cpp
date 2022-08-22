#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main(){
ll x,y;
ll a;
bool flag = false;
cin >> x >> y;
rep(i, x+1){
a = x - i;
if((2*a + 4*i) == y) flag = true;
}
if(flag) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
