#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7, N = 10005;
signed main() {
int n;
scanf("%d", &n);
if(n < 191) {
puts("Yay!");
} else if(n == 191) {
puts("so-so");
} else {
puts(":(");
}
return 0;
}
