#include <bits/stdc++.h>
using namespace std;
int main() {
int N, L; cin >> N >> L;
int total = 0;
for(int i = 0; i < N; i++) {
total += L + i;
}
if(L >= 0) {
total -= L;
} else if(L + N <= 0) {
total -= L + N - 1;
}
cout << total << endl;
}
