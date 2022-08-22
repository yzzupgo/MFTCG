#include <bits/stdc++.h>
using namespace std;
const int MOD = (int)1e9+7;
int main() {
int N;
cin >> N;
if(N<=9) cout << N << endl;
else if(N<=99) cout << 9 << endl;
else if(N<=999) cout << 9+N-99 << endl;
else if(N<=9999) cout << 9+1000-100 << endl;
else if(N<=9999) cout << 9+1000-100+N-9999 << endl;
else cout << 90909 << endl;
return 0;
}
