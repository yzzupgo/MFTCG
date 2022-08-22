#include <bits/stdc++.h>
using namespace std;
void chk() {
long long int n;
cin >> n;
double ans = (double)1.08 * (double)n;
long long int tt = floor(ans);
if(tt < 206) {
cout << "Yay!";
} else if(tt == 206) {
cout << "so-so";
} else {
cout << ":(";
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
