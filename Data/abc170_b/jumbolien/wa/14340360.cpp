#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vi>;
int main() {
int x,y;
cin >> x >> y;
if((y-2*x)%2==0 && (y-2*x)>=0 && y<=5*x) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
