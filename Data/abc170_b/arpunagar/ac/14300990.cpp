#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
#define inv(v) \
for (auto &it : v) \
cin >> it;
#define MOD 1000000007
void solve()
{
int x,y;
cin >> x >> y;
if(y%2 == 0 && y/2 >= x && y <= x*4){
cout << "Yes";
}
else
cout << "No";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}
