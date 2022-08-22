#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int n, r, k, i;
cin >> n;
r = 0;
k = 1;
i = 1;
while(i < n) {
k = k * 10;
for(; i <= min(n, k-1); ++i)
r++;
k = k * 10;
for(; i <= min(n, k-1); ++i);
}
cout << r << '\n';
return 0;
}
