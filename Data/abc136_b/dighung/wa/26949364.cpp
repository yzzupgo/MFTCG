#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
int count = 0;
cin >> N;
for (int i = 1; i <= N; i++) {
if (i < 9) count++;
else if (i >= 100 && i <= 999) count++;
else if (i >= 10000 && i <= 99999) count++;
}
cout << count << endl;
}
