#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main(){
int x,y;
cin >> x >> y;
if(4*x - y >= 0 && y - 2* x >= 0) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
