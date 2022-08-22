#include<bits/stdc++.h>
using namespace std;
int main(){
int n,ans=0;
cin >> n;
for(int i=0;i<n;i++){
if(1<=n&&n<=9)ans++;
if(100<=n&&n<=999)ans++;
if(10000<=n&&n<=99999)ans++;
}
cout << ans << endl;
}
