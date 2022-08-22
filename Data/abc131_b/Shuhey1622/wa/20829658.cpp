#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin >> n >> l;
vector<int> a(n);
for (int i = 0; i < n; i++) a[i] = l + i;
int m = INT32_MAX;
for (int i = 0; i < n; i++){
if(abs(a[i]) < m){
m = abs(a[i]);
}
}
cout << accumulate(a.begin(), a.end(), 0) - m << endl;
return 0;
}
