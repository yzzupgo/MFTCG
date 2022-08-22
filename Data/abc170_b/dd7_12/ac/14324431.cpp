#include<bits/stdc++.h>
using namespace std;
#define vite ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tst ll T; cin>>T; while(T--)
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
#define ll long long int
#define vt vector
#define pb push_back
int main()
{
vite;
ll a, b,k=-1;
cin >> a >> b;
for (ll i = 2*a; i <= 4 * a;i+=2)
{
if(b==i)
{
k = 1;
break;
}
}
if(k==1)
cout << "Yes";
else
cout << "No";
return 0;
}
