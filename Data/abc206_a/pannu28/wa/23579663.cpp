#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
int main() {
double n;
cin >> n;
n *= 1.08;
ll m = (ll)(n);
if(m < 206) {
cout << "Yay!";
} else if(m > 206) {
cout << ":)";
} else {
cout << "so-so";
}
return 0;
}
