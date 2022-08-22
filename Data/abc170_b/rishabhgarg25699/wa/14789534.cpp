#include <iostream>
#include<algorithm>
using namespace std;
#define ll long long int
#define pb emplace_back
#define mp make_pair
#define MOD (int) 1e9+7
#define for0(i,n) for (int i = 0; i < n; i++)
#define ff first
#define ss second
#define endl "\n"
#define bits(n) __builtin_popcount(n)
#define ini(a,i) memset(a, i, sizeof(a))
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
t = 1;
while (t--)
{
ll a, b;
cin >> a >> b;
ll temp = 4 * a;
temp = temp - b;
temp = temp / 2;
if (temp <= a && temp >= 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
return 0;
}
