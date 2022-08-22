#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0; i<(n); i++)
using ll = long long;
int main(){
int x, y; cin >> x >> y;
for(int i=0; i<=x; ++i){
int j = x - i;
if((i * 2) + (j * 4) == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
}
