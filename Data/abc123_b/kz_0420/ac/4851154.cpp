#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#include <array>
#include <complex>
#include <string>
#include <utility>
#include <map>
#include <queue>
#include <list>
#include <functional>
#include <numeric>
#include <stack>
#include <tuple>

using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }


int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
const int INF = 100000000;
const long long LINF = 1000000000000000000;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-6;
using pii = std::pair<int, int>;
using pLL = std::pair<long long, long long>;
using ll = long long;
#define SORT(v) std::sort(v.begin(), v.end())


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a[5];
	cin >> a[0] >> a[1] >> a[2] >>a[3] >> a[4];
    int temp = 10, min_id = 0;;
    for (int i =0 ; i < 5; ++i) {
        if (a[i] % 10 != 0) {
            if (temp > a[i] % 10) {
                temp = min(temp, a[i] % 10);
                min_id = i;
            }
            
        }
        
    }
    int ans=0;
    for (int i = 0; i < 5; ++i) {
        if (i!=min_id&&a[i]%10!=0) {
            ans += a[i] + (10 - a[i] % 10);
        }
        else{
            ans += a[i];
        }

    }
    cout << ans<< endl;
	return 0;
}