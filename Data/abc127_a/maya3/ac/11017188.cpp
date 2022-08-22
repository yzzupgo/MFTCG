#include <algorithm>
#include <deque>
#include <iostream>
#include <map>
#include <set>
#include <tuple>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
ll A, B;
cin >> A >> B;
ll ans;
if (A <= 5)
ans = 0;
else if (A < 13)
ans = B / 2;
else
ans = B;
cout << ans << endl;
return 0;
}
