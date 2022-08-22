#include <bits/stdc++.h>
using namespace std;
int main(void){
int n,a,i,s,ans=0;
cin >> n;
for (i=10;i<=n;i++){
s=0;
a=i;
while (a){
a/=10;
s++;
}
if (s%2) ans++;
}
cout << ans << endl;
return 0;
}
