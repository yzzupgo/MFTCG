#include <bits/stdc++.h>
using namespace std;
int main() {
int n, ans;
cin >> n;
if (n < 10){
ans = n;
cout << ans << endl;
}
else if (n < 100){
ans = 9;
cout << ans << endl;
}
else if (n < 1000){
ans = n-90;
cout << ans << endl;
}
else if (n < 10000){
ans = n-90-9000;
cout << ans << endl;
}
else if (n == 100000){
ans = n-90-9000-1;
cout << ans << endl;
}
}
