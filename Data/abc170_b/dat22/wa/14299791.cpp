#include <bits/stdc++.h>
#define FOR(i,j,k) for(int i = j; i <= k; i ++)
#define FORD(i,j,k) for(int i = j; i >= k; i --)
#define mp make_pair
using namespace std;
const int MOD=1e9+7;
const int N = 200005;
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int X, Y;
cin >> X >> Y;
if(Y / 2 >= X && Y / 4 <= X) cout << "Yes";
else cout << "No";
return 0;
}
