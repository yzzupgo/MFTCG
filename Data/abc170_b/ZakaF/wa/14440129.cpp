#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,k;
cin>>n>>k;
if(k>n*4 && k>n*2)
cout<<"NO\n";
else
{
if(k%2)
cout<<"NO\n";
else
cout<<"YES\n";
}
return 0;
}
