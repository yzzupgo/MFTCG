#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,ans=0;
cin>>n;
string str = to_string(n);
int i=1;
if (n<10) cout<<n;
while(i*100<n)
{
ans +=i*9;
i*=100;
}
if(str.size()%2 == 1) ans+=n - i +1;
else ans+= i*9;
cout<<ans;
return 0;
}
