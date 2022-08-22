#include<bits/stdc++.h>
using namespace std;
int main() {
int N, L;
cin >> N >> L;
if (N + L - 1 < 0) {
cout << (L + N + L - 2) * (N - 1) / 2 << endl;
}
else if (L > 0) {
cout << (L + 1 + N + L - 1) * (N - 1) / 2 << endl;
}
else {
cout << (L + N + L - 1) * N / 2 << endl;
}
return 0;
}
