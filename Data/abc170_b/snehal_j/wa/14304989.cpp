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
c_p_c();
int x,y;
cin>>x>>y;
if(y%2) cout<<"NO\n";
else
{
y = y/2;
int a=0;
int b;
for(int i = 1; i<=100; i++)
{
if((y-i)%2==0)
{
b = (y-i)/2;
if(i+b==x)
{
cout<<"YES"<<endl;
a = 1;
break;
}
}
}
if(a==0) cout<<"NO"<<endl;
}
}
