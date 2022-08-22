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
int c = (b - 2 * a);
int d = (4 * a - b);
if (c % 2 == 0 && d % 2 == 0 && c + d >= 2)
{
cout << "Yes";
}
else
{
cout << "No";
}
}
