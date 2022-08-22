#include <iostream>
#include <algorithm>
using namespace std;
int main() {
long long n;
cin >> n;
long long a[n];
for(long long i = 0; i < n; i++) {
cin >> a[i];
}
sort(a, a + n);
long long mnum = 0;
long long cnum = 0;
long long ren = 0;
for(long long i = 0; i < n; i++) {
if(cnum == a[i]) {
ren++;
mnum += ren;
} else {
cnum = a[i];
ren = 0;
}
}
long long num = ((n * (n - 1)) / 2) - mnum;
cout << num << endl;
return 0;
}
