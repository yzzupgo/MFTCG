#include<bits/stdc++.h>
using namespace std;
int main(){
int n,ans=0;
cin >> n;
for(int i=1;i<=n;i++){
if(1<=i&&i<=9)ans++;
if(100<=i&&i<=999)ans++;
if(10000<=i&&i<=99999)ans++;
}
cout << ans << endl;
}
