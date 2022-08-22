#include <bits/stdc++.h>
using namespace std;
#ifdef _LOCAL
#define dout cout
#define debug() if (true)
#define dvout(v) vout(v)
#else
#define dout \
if (false) \
cout
#define debug() if (false)
#define dvout(v) if(false);
#endif
#define next asdnext
#define prev asdprev
#define rep(i,n) for (int i = 0, i ##_len = (n); i < i ##_len; ++i)
#define vrep(i,v) for (auto &i : v)
#define all(x) (x).begin(), (x).end()
#define vout(v) \
for (auto &i : v) \
{ \
cout << i << " "; \
} \
cout << "\n";
#define vin(v) \
for (auto &i : v) \
cin >> i;
#define vecin(v,n) \
vec(v,n); \
vin(v);
#define vec(v,n) vector<int> v(n, 0);
#define mod (int)(1e9+7)
typedef long long ll;
typedef unsigned long long ull;
void Main()
{
int X,Y;
cin>>X>>Y;
if((Y%2)!=0){
cout<<"NO\n";
return;
}
if((X*2) > Y || (X*4) < Y){
cout<<"NO\n";
return;
}
cout<<"YES"<<endl;
return;
}
int main()
{
cin.tie(nullptr);
ios_base::sync_with_stdio(false);
cout << std::fixed << std::setprecision(15);
Main();
return 0;
}
