#include<bits/stdc++.h>
#include<string.h>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define endl "\n"
#define ll long long
#define int long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cin.exceptions(cin.failbit);cout.tie(NULL);
using namespace std;
bool isPrime(int n)
{
if (n <= 1)
return false;
if (n <= 3)
return true;
if (n % 2 == 0 || n % 3 == 0)
return false;
for (int i = 5; i * i <= n; i += 6)
{
if ((n % i == 0) || (n % (i + 2) == 0))
return false;
}
return true;
}
int32_t main()
{
ll x,y;
cin >> x >> y;
ll z=4*x;
ll raj=z-y;
if(raj%2==0 && raj>=0)
{
cout << "Yes";
}
else
cout << "No";
}
