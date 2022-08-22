#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
int n, l;
cin >> n >> l;
vector<int> a(n);
for(int i = 0; i < n; i++) {
a[i] = i + l;
}
int sum = accumulate(a.begin(), a.end(), 0);
int nin = 1e9, val = 0;
for(int i = 0; i < n; i++) {
if(nin > abs(a[i])) {
nin = abs(a[i]);
val = a[i];
}
}
cout << sum -val << endl;
}
