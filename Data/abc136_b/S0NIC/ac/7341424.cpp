#include<bits/stdc++.h>
using namespace std;
int odd(int i){
int digit=0;
while(i){
i=i/10;
digit++;
}
return (digit % 2);
}
int main(){
int n;
int ans=0;
cin>>n;
for(int i=0; i<=n; i++){
ans += odd(i);
}
cout<<ans;
}
