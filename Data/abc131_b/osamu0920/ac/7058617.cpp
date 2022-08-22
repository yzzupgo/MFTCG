#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0; (i)<(n); (i)++)
#define ll long long
int main() {
int n, l;
cin >> n >> l;
int ans=0;
if(l<1-n){
for(int i=1; i<n; i++) ans += i+l-1;
}
else if(l>0){
for(int i=2; i<=n; i++) ans += i+l-1;
}
else{
for(int i=1; i<=n; i++) ans += i+l-1;
}
cout << ans << endl;
}
