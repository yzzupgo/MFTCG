#include<bits/stdc++.h>
using namespace std;
int main(){
int n; cin>>n;
int d = floor(log10(n))+1, ans=0;
if(d&1){
ans = n-pow(10,d-1)+1;
d-=2;
}else
d--;
for(;d>0;d-=2)
ans += pow(10,d)-pow(10,d-1);
cout<<ans<<endl;
}
