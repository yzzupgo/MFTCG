#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int ans=0;
cin>>n;
for(int i=1;i<=n;i++){
if(n>=1&&n<=9||n>=100&&n<=999||n>=10000&&n<=99999) ans++;
}
cout<<ans<<endl;
return 0;
}
