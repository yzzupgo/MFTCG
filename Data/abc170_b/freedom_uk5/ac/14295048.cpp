#include <bits/stdc++.h>
using namespace std;
int main() {
long n,m;
string ans="Yes";
cin >> n >> m;
if(m%2==1) ans="No";
if(m<n*2) ans="No";
if(m>n*4) ans="No";
cout << ans << endl;
}
