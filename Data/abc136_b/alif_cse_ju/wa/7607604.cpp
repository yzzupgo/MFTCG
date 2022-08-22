#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,ans=0;
cin >> n;
ans+=(n,9);
if(n > 99)
{
ans+=min(n-99,999-99);
}
if(n > 9999)
{
ans+=min(n-9999,99999-9999);
}
cout << ans;
return 0;
}
