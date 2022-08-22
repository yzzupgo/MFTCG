#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5], s=0, mx=0, ex=0;
    for(int i=0; i<5; i++) {
        cin >> a[i];
        s += a[i];
        ex += 10-a[i]%10;
        mx=max(mx, 10-a[i]%10);
    }
    cout << s + ex - mx << endl;
    return 0;
}