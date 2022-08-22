#include <bits/stdc++.h>
using namespace std;
bool f(int x){
int keta=0;
while(x){
keta++;
x/=10;
}
return keta%2==1;
}
int main(){
int n;
int ans=0;
cin>>n;
for(int i=0;i<=n;i++){
if(f(i)) ans++;
}
cout<<ans<<endl;
}
