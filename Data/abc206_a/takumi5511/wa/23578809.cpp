#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
double ans = 1.08 * n;
cout << ans;
if(ans > 206) {
cout << ":(";
} else if(ans == 206) {
cout << "so-so";
} else if(ans < 206) {
cout << "Yay!";
}
return 0;
}
