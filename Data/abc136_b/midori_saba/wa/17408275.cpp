#include<iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
int a,ans=0;
cin >> a;
for (int i = 0; i < a;i++) {
if (1 <= a && a <= 9 || 100 <= a && a <= 999 || 10000 <= a && a <= 99999) {
ans++;
}
}
cout << ans;
return 0;
}
