#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <iomanip>
#include <stack>
#include <list>
#include <map>
#include <unordered_map>
#include <chrono>
#include <numeric>
using namespace std;
using ll = long long;
const ll INF = (ll)1e18+1;
const ll DIV = 1000000007;
int main()
{
cin.tie(0);
ios::sync_with_stdio(false);
#ifdef TEST
chrono::system_clock::time_point start, end;
start = chrono::system_clock::now();
#endif
long X,Y;
cin >> X >> Y;
ll turtle = 4, crane = 2;
if(Y > turtle * X || Y < crane * X)
{
cout << "No" << endl;
return 0;
}
ll max_leg = turtle * X;
bool ok = false;
for(size_t i=1;i<=X; i++)
{
if(max_leg - i * 2 == Y) ok=true;
}
if(ok) cout << "Yes" << endl;
else cout << "No" << endl;
#ifdef TEST
end = chrono::system_clock::now();
cerr << static_cast<double>(chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0) << "[ms]" << endl;
#endif
return 0;
}
