#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
bool f(int x){
int keta = 0;
while (x) {
keta++;
x /= 10;
}
return keta % 2 == 1;
}
int main() {
int s;
cin >> s;
int ans = 0;
for(int i = 1; i <= s; i++) {
if(f(i)) ans++;
}
cout << ans;
}
