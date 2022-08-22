#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l; cin>>n >>l;
int ans=0;
int eat=INT_MAX;
for(int i=l;i<=l+n-1;i++){
ans+=i;
eat=min(abs(i),abs(eat));
}
cout<<ans-eat<<endl;
}
