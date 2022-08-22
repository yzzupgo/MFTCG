#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 1; i < (int)(n); i++)
typedef long long ll;
int main(){
int x,y; cin >> x >> y;
string ans ="No";
rep(i,x){
if(i*2 + (x-i)*4 == y) ans = "Yes";
}
cout << ans << endl;
}
