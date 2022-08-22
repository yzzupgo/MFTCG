#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,n) for (int i = (a); i < (n); ++i)
int main() {
int N; cin >> N;
int cnt = 0;
REP (i, 1, N+1) {
int len = to_string(i).size();
if (len % 2 == 1) ++cnt;
}
cout << cnt << endl;
}
