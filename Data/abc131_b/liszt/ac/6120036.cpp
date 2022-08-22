#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l; cin>>n >>l;
int ans=0;
int eat=1000;
for(int i=l;i<l+n;i++){
ans+=i;
if(abs(eat)>abs(i))eat=i;
}
cout<<ans-eat<<endl;
}
