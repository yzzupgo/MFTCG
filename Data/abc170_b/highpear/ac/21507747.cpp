#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define ll long long
int main() {
int X, Y;
cin >> X >> Y;
bool is_ok = false;
rep(t, X+1) {
int sum = 2*t + 4*(X-t);
if(sum == Y) {
is_ok = true;
break;
}
}
if(is_ok) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
