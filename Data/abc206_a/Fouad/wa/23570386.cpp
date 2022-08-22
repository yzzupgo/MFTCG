#include <bits/stdc++.h>
using namespace std;
#define int short
#define f first
#define s second
#define pb push_back
signed main() {
double n;
cin >> n;
n *= 1.08;
if(n < 206) {
puts("Yay!");
return 0;
}
if(n > 206) {
puts(":(");
}
puts("so-so");
return 0;
}
