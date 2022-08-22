#include <bits/stdc++.h>
using namespace std;
int main() {
int N = 0, a = 0, d = 1;
cin >> N;
for(int i = 1; a < N; i++) {
a = a + i;
d++;
}
cout << d << endl;
}
