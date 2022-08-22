#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef signed long long ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(x) x.begin(),x.end()
#define DEBUG
int main()
{
int n, l;
int ans = 0;
cin >> n >> l;
for(int i = 0; i < n; i++)
{
ans += l;
l++;
}
if((l-n) < 0 && l > 0)
{
cout << ans << endl;
}
else if(ans >= 0)
{
ans -= (l - n);
cout << ans << endl;
}
else
{
ans -= l - 1;
cout << ans << endl;
}
return 0;
}
