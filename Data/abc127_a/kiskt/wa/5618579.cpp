#include<iostream>
#include<algorithm>
using namespace std;
int main() {
int n; cin >> n;
int m; cin >> m;
int maxl=0; int l=0; int r=0;
int maxr=0;
for (int i = 0; i < m; i++) {
cin >> l;
cin >> r;
if (maxl<l) {
maxl=l;
}
if (r<maxr) {
maxr = r;
}
}
int sum;
if (maxr < maxl) {
cout << 0;
}
else {
for (int i = 0; i < n; i++) {
if (maxl <= i && i <= maxr) {
sum += 1;
}
}cout << sum;
}
return 0;
}
