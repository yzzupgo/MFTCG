#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
int total = 0;
for(int i = 0; i < A; i++){
total += B + i;
}
if( B > 0 ) cout << total - B << endl;
else if( B <= 0 && A + B >= 0) cout << total << endl;
else cout << total - (B + A - 1) << endl;
}
