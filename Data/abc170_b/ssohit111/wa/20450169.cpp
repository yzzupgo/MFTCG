#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_az_fck ios_base::sync_with_stdio(false);cin.tie(NULL);
struct custom_hash {
static uint64_t splitmix64(uint64_t x) {
x += 0x9e3779b97f4a7c15;
x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
return x ^ (x >> 31);
}
size_t operator()(uint64_t x) const {
static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
return splitmix64(x + FIXED_RANDOM);
}
};
bool cmp(ll a,ll b)
{
return a>b;
}
int main()
{
fast_az_fck
ll x,y;
cin>>x>>y;
ll p=(y-(2*x));
ll q=p%2;
ll r=((4*x)-y);
ll s=r%2;
if((p>0)&&(q==0)&&(r>0)&&(s==0))
cout<<"Yes";
else
cout<<"No";
}
