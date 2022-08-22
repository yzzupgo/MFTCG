#include <bits/stdc++.h>
using namespace std;
void chk() {
long long int n;
cin >> n;
double ans = (double)1.08 * (double)n;
if(ans < 206) {
cout << "Yay!";
} else {
cout << "so-so";
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int q = 1;
while(q--) {
chk();
}
}
