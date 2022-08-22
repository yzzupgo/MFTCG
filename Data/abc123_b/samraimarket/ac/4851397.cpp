#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
template <typename T = int>
T in() {
    T temp; cin >> temp; return temp;
}

template <typename VType = int>
list<VType> const LR(VType start, VType end) {
    list<VType> ret; for (VType i = start; i < end; i++) ret.push_back(i); return move(ret);
}

int main() {
    int k[5];
    pair<int, int> last = make_pair<int, int>(10, 124);
    for (int i = 0; i < 5; i++) {
        k[i] = in();
        int temp = (k[i] % 10);
        if ((temp < last.first) && temp != 0) {
            last = make_pair(temp, i);
        }
    }
    
    int sum = 0;
    bool flag = (last.second == 124);
    for (int i = 0 ; i < 5; i++) {
        if (i == last.second) continue;
        sum += k[i];
        int temp = sum % 10;
        if ((temp != 0) &&
            !(i == 4 && flag)) {
            sum += 10 - temp;
        }
    }
    if (!flag) sum += k[last.second];
    cout << sum << endl;
    return 0;
}


