#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int X, Y;
cin >> X >> Y;
if(Y%2==0 && X>=Y/4 && X<=Y/2) cout << "Yes";
else cout << "No";
return 0;
}
