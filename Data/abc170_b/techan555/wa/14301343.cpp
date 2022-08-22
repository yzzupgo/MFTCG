#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
int main()
{
int x, y; cin >> x >> y;
bool flg = false;
rep(i, x+1) {
rep(j, x+1) {
if(i*4 + j*2 == y && i+j <= x) flg=true;
}
}
if (flg == false) cout << "No" << endl;
else cout << "Yes" << endl;
return 0;
}
