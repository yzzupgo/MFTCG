#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int ans=0;
cin>>n;
for(int i=1;i<=n;i++){
if(i>=1&&i<=9||i>=100&&i<=999||i>=10000&&i<=99999) ans++;
}
cout<<ans<<endl;
return 0;
}
