#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <map>
#define rep(i,N) for (int i = 0; i < (int)N; i++)
using namespace std;
typedef long long ll;
const ll LLINF = 9223372036854775807;
const int INF = pow(2,29);
const int MOD = 1000000007;
int main() {
int A, B; cin >> A >> B;
int result = 0;
if (A>=6&&A<=12) result = B/2;
if (A>=13) result = B;
cout << result << endl;
return 0;
}
