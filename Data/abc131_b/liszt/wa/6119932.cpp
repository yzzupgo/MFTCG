#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l; cin>>n >>l;
int ans=0;
int eat=INT_MAX;
for(int i=1;i<=n;i++){
int k=l+i-1;
ans+=k;
eat=min(abs(k),eat);
}
cout<<ans-eat<<endl;
}
