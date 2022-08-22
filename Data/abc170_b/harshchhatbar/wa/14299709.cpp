#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define PI1 3.14159265358979311599796346854418516159057617187500
typedef long long int ll;
ll MOD = 1e9 + 7;
ll power(ll a , ll n)
{
unsigned long long int result=1,x=a;
while(n>0)
{
if(n % 2 ==1)
result = (result * x)%MOD;
x = (x * x)%MOD;
n=n/2;
}
return result;
}
ll GCD(ll a , ll b)
{
if(b==0)
return a;
else
return GCD(b,a%b);
}
int main()
{
FIO
int t;
t=1;
while(t--)
{
int x,y;
cin >> x >> y;
int p1 = y - 2*x;
int p2 = 3*x - y;
if(p1>=0 && p2>=0)
{
cout << "Yes" << endl;
}
else
cout << "No" << endl;
}
return 0;
}
