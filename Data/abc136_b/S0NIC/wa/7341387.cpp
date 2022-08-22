#include<bits/stdc++.h>
using namespace std;
int odd(int i){
int digit=0;
while(i){
i=i/10;
digit++;
}
if(digit %2==0) return 0;
else 1;
}
int main(){
int n;
int ans=0;
cin>>n;
for(int i=0; i<=n; i++){
if(odd(i)==1) ans++;
}
cout<<ans;
}
