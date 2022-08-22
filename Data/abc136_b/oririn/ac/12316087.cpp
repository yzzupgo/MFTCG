#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int ans=0;
cin>>n;
for(int i=1;i<=n;i++){
int check=i;
int digit=0;
while(check>0){
check/=10;
digit++;
}
if(digit%2==1) ans++;
}
cout<<ans<<endl;
return 0;
}
