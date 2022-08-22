#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <iterator>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
    vector.erase(vector.begin() + index);
}

#define rep(i, n, m) for (int i = n; i <= m; i++)
#define Rep(i, n, m) for (int i = m; i >= 1; i--)

typedef long long ll;

int main() {
    vector<int> an(5);
    vector<int> a1(5);
    rep(i, 0, 4)  {
        cin>> an[i];
        a1[i] = an[i] % 10;
        if (a1[i] == 0) {
            a1[i] = 10;
        }
    }
    int ans = 0, b = 0;
    bool flg = 0;
    decltype(a1)::iterator minf = min_element(a1.begin(), a1.end());
    rep(i, 0, 4) {
        if (a1[i] != *minf) {
            if (a1[i] == 10) {
                ans += (an[i] / 10) * 10;
            } else {
                ans += (an[i] / 10 + 1) * 10;
            }
        } else {
            if (flg == 0) {
                b = an[i];
                flg = true;
            } else {
                if (a1[i] == 10) {
                    ans += (an[i] / 10) * 10;
                } else {
                    ans += (an[i] / 10 + 1) * 10;
                }
            }
        }
    }
    cout << ans + b << endl;
}