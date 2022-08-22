#include <bits/stdc++.h>
using namespace std;
void solve()
{
return;
}
int main() {
int n,l;
cin>>n>>l;
string ans= "No";
for(int i=0;i<=n;i++)
{
int rem= n-i;
if(2* i + 4* rem == l)
ans="Yes";
}
cout<<ans<<endl;
return 0;
}
