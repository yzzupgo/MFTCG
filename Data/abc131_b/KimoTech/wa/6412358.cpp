#include <bits/stdc++.h>
using namespace std;
int main() {
int n,l;
cin >> n >> l;
vector<int> azi(n);
for (int i=0; i<n; i++){
azi.at(i) = l+i;
}
int ans;
for (int i=1; i<n; i++){
if (abs(azi.at(i-1)) > abs(azi.at(i))){
ans = azi.at(i);
}
}
cout << ans << endl;
}
