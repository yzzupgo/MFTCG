#define FORI(x) for(int i=0;i<x;++i)
#define FORJ(x) for(int j=0;j<x;++j)
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int ans = 0;
FORI(n) {
ans += i+l;
}
if (l > 0) {
ans -= l;
}else if (n + l < 0) {
ans -= n + l-1;
}
cout << ans;
return 0;
}
