#include <bits/stdc++.h>
using namespace std;
int main() {
int n, m;
cin >> n >> m;
vector<int> h(n);
int ans=100000;
for(int i=0;i<n;i++){
h.at(i)=m+i;
ans=min(ans,abs(m+i));
}
int sum=0;
for(int i=0;i<n;i++){
sum+=h.at(i);
}
cout << sum-ans << endl;
}
