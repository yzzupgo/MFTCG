#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;
int main() {
int n;cin>>n;
int l;cin>>l;
int ans;
if(l>=0){
ans = (l+1+l+n-1)*(n-1)/2;
cout << ans << endl;
return 0;
}
else {
if(l+n>0){
ans = (l+l+n-1)*(l-1)/2;
cout << ans<< endl;
return 0;
}
ans = (l+l+n-2)*(n-1)/2;
cout << ans << endl;
return 0;
}
}
