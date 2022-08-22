#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define what_is(x) cerr << #x << " is " << x << endl;
int main()
{
fastIO;
int x,y;
cin>>x>>y;
if ((y/4==x && y%4==0) || ( y%2==0 && y/2==x))
cout<<"Yes\n";
else if (y%2!=0 && y%4!=0)
cout<<"No\n";
else if (y/2>x && y/2-x<=x )
cout<<"Yes\n";
else
cout<<"No\n";
}
