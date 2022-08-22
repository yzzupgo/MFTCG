#include<iostream>
#include<cmath>
using namespace std;
int main() {
long long n; cin >> n;
long long a = n;
int keta = 1;
long long ans = 0;
while (a / 10 != 0) {
keta++;
a = a / 10;
}
if (keta % 2 == 0) {
for (int i = 1; i < keta; i++) {
if (i % 2 == 1) {
ans += pow(10, i) - pow(10, i - 1) ;
}
}
}
else {
for (int i = 1; i < keta; i++) {
if (i % 2 == 1) {
ans += pow(10, i) - pow(10,i-1);
}
}
ans += n - pow(10, keta-1)+1;
}
cout << ans << endl;
return 0;
}
