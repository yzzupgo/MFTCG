#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define rep2(i,s,n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;
int main() {
int n;
cin >> n;
if (n / 100 == 0) {
cout << min(n, 9) << endl;
}
else if (n / 10000 == 0) {
cout << min(n-90, 909) << endl;
}
else {
cout << min(n-9090, 90909) << endl;
}
}
