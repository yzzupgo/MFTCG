#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
int main() {
int A, B; cin >> A >> B;
int maximum = A + B;
maximum = (A-B) > maximum ? (A-B) : maximum;
maximum = (A*B) > maximum ? (A*B) : maximum;
cout << maximum << endl;
}
