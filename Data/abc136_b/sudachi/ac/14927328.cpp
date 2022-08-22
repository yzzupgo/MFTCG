#include <iostream>
#include <cmath>
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;
int main() {
int N;
cin >> N;
int cnt = 0;
for (int i=1; i<=N; ++i) {
int l = to_string(i).length();
if (l%2 == 1) cnt++;
}
cout << cnt << endl;
return 0;
}
