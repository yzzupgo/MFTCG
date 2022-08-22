#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cmath>
#define endl "\n"
using namespace std;
void solve()
{ int x,y; cin >> x >> y;
if(y&1) cout << "No";
(x>=y/2) ? cout << "Yes" : cout << "No";
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
solve();
}
