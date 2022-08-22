#include <iostream>
#include <algorithm>
#include <climits>
#include <numeric>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <unordered_map>
 
#define barsik ios::sync_with_stdio(false)
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
typedef long long ll;
typedef std::vector<int> vi;
typedef std::pair <int, int> pii;
typedef std::unordered_set <int> u_si;
const double PI = acos(-1);
const long double EPS = 1e-9;
using namespace std;

int a[5];
int ans = 1e9;
 
void solve(){
    for(int i = 0; i < 5; i++) cin >> a[i];
    do{
        int sum = 0;
        for(int i = 0; i < 4; i++){
            cout << a[i] << ' ';
            int x = (a[i] % 10 == 0) ? a[i] : (a[i] / 10 + 1) * 10;
            sum += x;
        }
        //cout << " :: " << sum + a[4] << endl;
        ans = min(sum + a[4], ans);
    }
    while(next_permutation(a, a + 5));
    cout << ans;
}

 
int main() {
    barsik;
    int q = 1;
    //cin >> q;
    while(q--) solve();
}
