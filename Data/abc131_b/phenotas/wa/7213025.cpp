#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int ans = ((l)+(l+n-1))*n/2;
if (l < 0 && abs(l) < n){
}
else if (l > 0){
ans -= l;
}
else {
ans -= (l+n-1);
}
cout << ans << endl;
}
