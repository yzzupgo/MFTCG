#include <bits/stdc++.h>
#define ALL(s) (s).begin(),(s).end()
using namespace std;
using ll=long long;
ll M=1000000007LL;
int main(void)
{
    ll a,b,c,d,e,f=9,g=40; cin>>a>>b>>c>>d>>e;
    f=(f>a%10?f=a%10:f),f=(f>b%10?f=b%10:f),f=(f>c%10?f=c%10:f),f=(f>d%10?f=d%10:f),f=(f>e%10?f=e%10:f);
    g-=(a%10==0?10:0),g-=(b%10==0?10:0),g-=(c%10==0?10:0),g-=(d%10==0?10:0),g-=(e%10==0?10:0);
    cout<<(a/10+b/10+c/10+d/10+e/10)*10+g+f<<endl;
}
