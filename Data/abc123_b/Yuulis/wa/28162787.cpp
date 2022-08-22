#include <bits/stdc++.h>

#include <map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define INF 1e+9
#define INFL 1LL << 60
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;

template <class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return 1;
    }
    return 0;
}

// ======================================== //

int main() {
    vector<int> dishes(5);
    cin >> dishes[0] >> dishes[1] >> dishes[2] >> dishes[3] >> dishes[4];

    int ans = INF;
    do {
        int time = 0;
        for (auto &&i : dishes) {
            if (time % 10 != 0) time += 10 - (time % 10);
            time += dishes[i];
        }
        chmin(ans, time);

    } while (next_permutation(all(dishes)));

    cout << ans << endl;
}