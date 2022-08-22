#include <bits/stdc++.h>
using namespace std;
#define rep(i,c) for (int i = 1; i <= (int)c; i++)
int main()
{
int x,y;
cin >> x >> y;
int turu = y/2+1;
int kame = y/4+1;
string ans = "No";
rep(i, turu) rep(j, kame) {
if (i*2+j*4 == y && i+j == x) ans = "Yes";
}
cout << ans << endl;
return 0;
}
