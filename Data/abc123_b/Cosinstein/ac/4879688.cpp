#include <bits/stdc++.h>
using namespace std;

int main() {
    //int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    int a[10];
    for (int i=0; i<5; i++) {
        cin >> a[i];
    }
    
    int val = 10; 
    int sum = 0;
    for (int i=0; i<5; i++) {
        if (a[i] % 10 == 0) {
            sum += a[i];
        }

        else sum += (a[i]/10+1) * 10;
        if ((a[i] % 10) <= val && a[i] % 10 != 0) {
            val = a[i] % 10;
        }
    }
    
    cout << sum - 10 + val << endl;

    return 0;
}


