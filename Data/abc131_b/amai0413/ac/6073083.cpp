#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l; cin >> n >> l; int g=100000; int h=0;
vector<int> a(n);
for (int i=0; i<n;i++) {
a[i]=l+i;
g=min(g,abs(a[i]));
if(g==abs(a[i])){
h=a[i];
}
}
int count=0;
for (int i=0; i<n;i++) {
count+=a[i];
}
count-=h;
cout << count << endl;
}
