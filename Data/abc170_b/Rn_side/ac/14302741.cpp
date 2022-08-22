#include <bits/stdc++.h>
#define rep(i,n) for( int i=0; i<(n);++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int main(){
int x,y;
cin >> x >>y;
bool can =false;
for(int i =0; i <=y/2; i++) {
if (2*i+4*(x-i)==y){
can = true;
break;
}
}
if(can) cout << "Yes" << endl;
else cout << "No" << endl;
}
