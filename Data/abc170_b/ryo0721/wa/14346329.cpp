#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using LL = long long;
using P = pair<int,int>;
int main(){
int x, y;
cin >> x >> y;
bool ans = false;
rep(i,y/2){
if(i*2+(x-i)*4==y) ans = true;
}
if(ans) cout << "Yes" << endl;
else cout << "No" << endl;
}
