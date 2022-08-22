#include <bits/stdc++.h>
using namespace std;
int main() {
int n, count;
cin >> n;
count = 0;
for (int i=1; i<=n; i++) {
if (to_string(i).size()%2==1) {
count++;
}
}
cout << count << endl;
}
