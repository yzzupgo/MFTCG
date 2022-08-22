#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l; cin >> n >> l; int g=n+l;
vector<int> a(n);
for (int i=0; i<n;i++) {
a[i]=l+i;
g=min(g,abs(a[i]));
}
int count=0;
for (int i=0; i<n;i++) {
count+=a[i];
}
count-=g;
cout << count << endl;
}
