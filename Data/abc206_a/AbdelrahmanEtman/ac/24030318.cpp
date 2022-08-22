#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 5;
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
n *= 108;
n /= 100;
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
