#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
int n;
cin >> n;
if(1.08 * n < 206) {
cout << "Yay!";
} else if(1.08 * n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
