#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void test() {
int n;
cin >> n;
int x = floor((double)(1.08 * n));
cout << x << "\n";
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
cout << "\n";
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int t = 1;
while(t--) {
test();
}
return 0;
}
