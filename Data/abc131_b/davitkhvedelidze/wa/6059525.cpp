#include <bits/stdc++.h>
using namespace std;
int main() {
int n,l,i,a,b,c,ans,d,s=0;
cin>>n>>l;
for (i=1;i<=n;i++)
s+=i+l-1;
if (l<=0)
cout<<s<<endl;
else
cout<<s-l<<endl;
}
