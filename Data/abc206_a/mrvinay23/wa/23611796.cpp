#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin >> n;
long long a[n];
for(int i = 0; i < n; i++) {
cin >> a[i];
}
long long sum = 0, cnt = 0;
for(long long i = 0; i < n; i++) {
sum += n - i - 1;
}
sort(a, a + n);
for(int i = 1; i < n; i++) {
if(a[i] == a[i - 1]) {
cnt++;
}
}
cout << sum - cnt;
return 0;
}
