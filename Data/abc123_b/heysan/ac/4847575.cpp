#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vvi;

#define INF (1e9)

int main() {
    int sm = 0, x = 10, a;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        sm += (int)((a + 9) / 10);
        if (a % 10 == 0) continue;
        x = min(x, a % 10);
    }

    cout << sm * 10 - 10 + x << endl;
    return 0;
}
