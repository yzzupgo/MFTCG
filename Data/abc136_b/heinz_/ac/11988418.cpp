#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define SIZE_1 2000005
#define SIZE_2 1000000
#define INT_BITS 32
typedef long long int ll;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
typedef vector<ll> vi;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
int n;
cin >> n;
if(n >= 1 and n <= 9)
{
cout << n;
}
else if(n >= 10 and n <= 99)
{
cout << "9";
}
else if(n >= 100 and n <= 999)
{
cout << 10 + n - 100;
}
else if(n >= 1000 and n <= 9999)
{
cout << 909;
}
else if(n >= 10000 and n <= 99999)
{
cout << 910 + n - 10000;
}
else
cout << 90909;
return 0;
}
