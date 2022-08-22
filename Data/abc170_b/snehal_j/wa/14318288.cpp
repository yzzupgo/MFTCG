#include<bits/stdc++.h>
#define __STDC_LIMIT_MACROS
#include <stdint.h>
using namespace std;
#define int long long
bool isPrime(int n)
{
if (n <= 1)
return false;
if (n <= 3)
return true;
if (n % 2 == 0 || n % 3 == 0)
return false;
for (int i = 5; i * i <= n; i += 6)
{
if (n % i == 0 || n % (i + 2) == 0)
return false;
}
return true;
}
void c_p_c()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int32_t main()
{
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int x,y;
cin>>x>>y;
int a,b,f;
for(int i = 1; i<=100; i++)
{
a = i;
b = x-i;
if((2*a+4*b)==y)
{
cout<<"YES"<<endl;
f = 1;
break;
}
}
if(f==0) cout<<"NO"<<endl;
}
