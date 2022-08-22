#include <bits/stdc++.h>
#define debug(x) cerr << #x << " = " << x << '\n'
#define vecdbg(vec) do{std::cerr << #vec << " =========\n";vectorDebug(vec);}while(0)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
using namespace std;
using P = pair<int, int>;
using ll = long long;
template <class T> using vec = vector<T>;
template <class T> using mat = vector<vector<T>>;
template <class T>
void vectorDebug(const std::vector<T> &v) { for(const auto& x : v){ std::cerr << x << " "; } std::cerr << '\n';}
template <class T> bool chmax(T &a, const T &b) {if(a < b){a = b; return true;} else {return false;}}
template <class T> bool chmin(T &a, const T &b) {if(a > b){a = b; return true;} else {return false;}}


int main() {
    // input
    vector<int> A(5);
    rep(i, 5) cin >> A[i];
    int maxv = 0;
    int res = 0;
    rep(i, 5) {
        int tmp = A[i] % 10;
        if (tmp != 0) chmax(maxv, 10 - tmp);
        res += ((A[i] + 9) / 10) * 10;
    }

    // output
    cout << res - maxv << endl;
    return 0;
}


