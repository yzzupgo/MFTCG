#include <bits/stdc++.h>
using namespace std;
#define IOS \
ios_base::sync_with_stdio(0); \
cin.tie(NULL); \
cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define Debug(x) cout << #x " = " << (x) << endl
#define SORT(a) sort(a.begin(), a.end())
#define SORTR(a) sort(a.rbegin(), a.rend())
int main()
{
IOS;
int x, y;
cin >> x >> y;
int A = ((4 * x) - y);
int B = (y - (2 * x));
if (A >= 0 && B >= 0 && A % 2 == 0 && B % 2 == 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
