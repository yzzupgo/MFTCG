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
int a, b;
cin >> a >> b;
int c = (b - 2 * a) / 2;
int d = (4 * a - b) / 2;
if (c >= 0 && d >= 0)
{
cout << "Yes";
}
else
{
cout << "No";
}
}
