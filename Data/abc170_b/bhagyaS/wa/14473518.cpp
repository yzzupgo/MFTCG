#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x, y;
cin >> x >> y;
string ans = "Yes";
if (y % 2 == 1)
ans = 'No';
int mi = 2 * x;
int ma = 4 * x;
if (y < mi || y > ma)
ans = "No";
cout<<ans<<endl;
}
