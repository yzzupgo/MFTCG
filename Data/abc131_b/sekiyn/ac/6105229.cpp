#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
using namespace std;
int main(){
int n,l;
int ans=0;
cin >> n >> l;
for(int i=0; i<n; i++){
ans+=l+i;
}
if(l>=0) cout << ans-l << endl;
else{
if(n+l-1>=0) cout << ans << endl;
else cout << ans-n-l+1 << endl;
}
return 0;
}
