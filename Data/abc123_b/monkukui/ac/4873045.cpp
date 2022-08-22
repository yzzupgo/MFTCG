#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>

using namespace std;
#define int long long int
const int INF = 1001001001001001LL;
const int MOD = 1000000007;

signed main(){

    int n = 5;
    vector<int> a(5);
    for(int i = 0; i < 5; i++) cin >> a[i];
    
    int ans = INF;
    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = 0; j < n; j++){
            if(i == j || a[j] % 10 == 0) tmp += a[j];
            else tmp += a[j] + (10 - a[j] % 10);
        }
        ans = min(ans, tmp);
    }
    cout << ans << endl;

    return 0;
}

