#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;
#define int long long
#define pb push_back
#define in insert
#define F first
#define S second
#define mod 1000000007
#define endl '\n'
#define w(x) int x;cin>>x; while(x-->0)
#define memset(a,b) memset(a,b,sizeof(a))
#define debug(x) cout << "[ " << #x << " : " << x << " ]" << endl;
void fast()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
void mysol()
{
int x, leg; cin >> x >> leg;
if (leg & 1 or x > leg / 2)
{
cout << "No";
return;
}
int ani = leg / 2;
int f = 0;
while (ani >= 0)
{
if (f + ani == x)
{
cout << "Yes";
return;
}
f++;
ani -= 2;
}
cout << "No";
}
int32_t main()
{
fast();
{
mysol();
}
return 0;
}
