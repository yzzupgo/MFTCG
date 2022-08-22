#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(5);
    for(int i=0; i<5; i++) cin >> v[i];

    int marge = 0;
    int sum = 0;
    for(int i=0; i<5; i++) {
        if(v[i] % 10 != 0) {
            marge = max(marge, 10-v[i]%10);
        }
        while(v[i] % 10 != 0) {
            v[i]++;
        }
        sum += v[i];
    }
    cout << sum-marge << endl;
}

