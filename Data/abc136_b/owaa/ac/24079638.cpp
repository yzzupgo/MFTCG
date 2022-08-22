#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int i,j,ans=0;
for(i=1;i<=n;i++){
int a=i,cnt=0;
for(j=0;j<6;j++){
if(a == 0) break;
a = a/10;
cnt++;
}
if(cnt%2 == 0) continue;
else{
ans++;
}
}
cout << ans << endl;
}
