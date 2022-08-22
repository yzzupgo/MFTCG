#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int kazu(int x) {
int temp;
if (x < 10) {
return 1;
}
else if (100 <= x && x < 1000) {
return 1;
}
else if (10000 <= x && x < 100000) {
return 1;
}
else
{
return 0;
}
}
int main() {
int n;
cin >> n;
int ans = 0;
for (int i = 1; i < n; i++) {
ans += kazu(i);
}
cout << ans;
return 0;
}
