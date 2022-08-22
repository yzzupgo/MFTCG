#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
cin.tie(nullptr); ios::sync_with_stdio(false);
int x,y; cin>>x>>y;
if (4*x >= y and (4*x-y)%2==0 and (4*x-y)/2 <= x) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
