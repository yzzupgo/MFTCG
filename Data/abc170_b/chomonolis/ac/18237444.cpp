#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define rrep2(ri,x,n) for(int ri = (int)(n-1); ri >= (int)(x); ri--)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(x) x.begin(), x.end()
using ll = long long;
using namespace std;
int main(){
int x, y;
cin >> x >> y;
bool f = false;
rep(i, y){
rep(j, y){
int ii = i * 2;
int jj = j * 4;
if(ii + jj == y && i + j == x) f = true;
}
}
if(f == true) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
