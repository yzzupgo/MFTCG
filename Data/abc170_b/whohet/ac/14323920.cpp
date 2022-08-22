#include<bits/stdc++.h>
#define fasterthanlight ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define test int T; cin>>T; while(T--)
#define endl "\n"
#define int long long
#define vi vector<int>
#define pb push_back
#define mod 1000000007
#define MAX 1e9
#define MIN -1e9
#define hi "visited\n"
using namespace std;
signed main()
{
fasterthanlight;
int x, y;
cin >> x >> y;
if (y - (2 * x) >= 0 && (4*x-y)>=0)
{
if (y % 2 == 0)
cout << "Yes";
else
cout << "No";
}
else
cout << "No";
return 0;
}
