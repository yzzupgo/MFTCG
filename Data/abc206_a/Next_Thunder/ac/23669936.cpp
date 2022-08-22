#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int n;
cin >> n;
n *= (1.08);
if(n < 206) {
cout << "Yay!\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
return 0;
}
