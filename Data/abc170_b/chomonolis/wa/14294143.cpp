#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(x) x.begin(), x.end()
using ll = long long;
using namespace std;
int main(){
int x, y;
cin >> x >> y;
for(int i = 0; i < 200; i++){
int ii = i * 2;
int j = x - i;
int jj = j*4;
if(ii + jj == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
