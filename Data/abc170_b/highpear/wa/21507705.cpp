#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define ll long long
int main() {
int X, Y;
cin >> X >> Y;
int t = 2*X-Y/2;
if(0 <= t && t <= X) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
