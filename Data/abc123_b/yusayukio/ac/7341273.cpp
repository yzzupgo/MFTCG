#include <bits/stdc++.h>
using namespace std;
int main() {
    int t = 0;
    int min = 10;
    for(int i = 0;i < 5;i++) {
        int a;
        cin >> a;
        if(a % 10 == 0) {
            t += a;
        }else {
            t += (a / 10) * 10 + 10;
        }
        if(a % 10 < min && a % 10 != 0) {
            min = a % 10;
        }
    }
    cout << t + min - 10 << endl;
}
