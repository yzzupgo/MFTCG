#include<bits/stdc++.h>
#define ll long long
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
using namespace std;
void solve()
{
int x , y;
cin >> x >> y;
bool ok = 0;
if(y&1) ok=1;
else
{
int X = y/2 - x;
int Y = x-X;
if((X+Y)==x && X>=0 && Y>=0) ok = 1;
else ok = 0;
}
if(ok) cout << "Yes" ;
else cout << "No";
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
solve();
}
