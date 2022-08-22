#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
bool isOdd(int i) {
int counter = 0;
while (i > 0) {
counter++;
i /= 10;
}
return counter % 2 == 1;
}
int main() {
int N;
cin >> N;
int ans = 0;
rep(i, N) {
if (isOdd(i+1)) {
ans++;
cout << i+1 << endl;
}
}
cout << ans << endl;
}
