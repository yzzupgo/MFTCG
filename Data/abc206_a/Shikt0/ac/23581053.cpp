#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <int, int> pii;
void slv() {
double n;
cin >> n;
double ans = n * 1.08;
ans = floor(ans);
if(ans < 206) {
cout << "Yay!\n";
} else if(ans == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int tc = 1;
while(tc--) {
slv();
}
return 0;
}
