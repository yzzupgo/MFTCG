#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
int main(){
ll x,y;
ll a;
ll flag = 0;
cin >> x >> y;
rep(i, x){
a = x - i;
if((2*a + 4*i) == 0) flag = 1;
}
if(flag == 0) cout << "No" << endl;
if(flag == 1) cout << "Yes" << endl;
return 0;
}
