#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
#define ll long long
#define ld long double
#define ss second
#define ff first
#define all(a) a.begin() , a.end()
#define All(a) a.rbegin() , a.rend()
#define ios ios_base::sync_with_stdio(0),cin.tie(0),cout.precision(10),cout << fixed
int main()
{
ios;
int x, y;
cin >> x >> y;
for(int i=0;i<=x;++i)
for (int j = 0; j <= x; ++j)
{
if (i * 2 + j * 4 == y)
{
cout << "YES\n";
return 0;
}
}
cout << "NO\n";
return 0;
}
