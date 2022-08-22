#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
int N, L;
cin >> N >> L;
int amount = 0;
int diff = 40000;
for(int i = 0; i < N; i++) {
amount += L + i;
}
for(int i = 0; i < N; i++) {
diff = min(abs(diff), abs(L+i));
}
cout << amount - diff << endl;
return 0;
}
