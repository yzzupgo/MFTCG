#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
int n,l,min,ans=0;
cin>>n>>l;
if(l<=0&&l+n-1>=0)min=0;
else min=l;
rep(i,n)
ans+=l+i;
cout<<ans-min<<endl;
}
