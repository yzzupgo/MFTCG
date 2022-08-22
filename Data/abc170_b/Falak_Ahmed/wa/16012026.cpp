#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define eb emplace_back
const int MAX=1000000;
int main()
{
ll t;
t=1;
while(t--)
{
ll a,b;
cin>>a>>b;
if(b%2==0)
{
ll n=b/4;
if(b%4!=0)n++;
if(n<=a)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
} else cout<<"NO"<<endl;
}
}
