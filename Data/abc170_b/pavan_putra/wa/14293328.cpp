#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll long long int
#define mod 1000000007
#define vec vector<long long int>
#define fi first
#define se second
#define pb push_back
int main()
{
ll a, b;
cin >> a >> b;
ll c = a * 2;
ll d = a * 4;
if (c == b || b == d)
{
cout << "No";
}
else
{
cout << "Yes";
}
}
