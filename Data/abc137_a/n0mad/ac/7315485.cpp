#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx,avx2,fma")
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int a,b;
cin>>a>>b;
if(a+b>a-b && a+b>a*b)
cout<<a+b<<'\n';
else if(a-b>a+b && a-b>a*b)
cout<<a-b<<'\n';
else if(a*b>a-b && a*b>a+b)
cout<<a*b<<'\n';
else
cout<<a+b<<'\n';
return 0;
}
