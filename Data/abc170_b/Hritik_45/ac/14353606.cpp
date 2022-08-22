#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
#define ff first
#define ss second
#define pb push_back
#define Inf 1000000000000000000
#define inf -1000000000000000000
#define mod 1000000007
ll mulmod(ll x,ll y){
return (x%mod*y%mod)%mod;
}
ll addmod(ll x,ll y){
return (x%mod+y%mod)%mod;
}
long long power(long long x,long long y) {
long long res = 1;
while (y > 0)
{
if (y & 1)
res = res*x;
y = y>>1;
x = x*x;
}
return res;
}
void testcases(int Case){
int X,Y;
cin >> X >> Y;
bool flag = false;
for(int i = 1; i<=Y;i++){
int tmp1 = i;
int tmp2 = Y - i;
if(tmp1%2==0&&tmp2%4==0){
if((tmp1/2+tmp2/4)==X)
flag = true;
}
if(tmp1%4==0&&tmp2%2==0){
if((tmp2/2+tmp1/4)==X)
flag = true;
}
}
if(flag){
cout << "Yes" << "\n";
}
else{
cout << "No" << "\n";
}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll t;
t = 1;
ll Case =1 ;
while(t--)
{
testcases(Case++);
}
}
