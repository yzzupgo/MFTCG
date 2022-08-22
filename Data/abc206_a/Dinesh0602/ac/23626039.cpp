#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
int n;
cin >> n;
int m = (1.08 * n);
if(m < 206) {
cout << "Yay!";
} else if(m == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
