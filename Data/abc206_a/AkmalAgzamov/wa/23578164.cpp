#include <bits/stdc++.h>
#define int long long
using namespace std;
main() {
double n;
cin >> n;
n *= 1.08;
if(n < 206) {
cout << "Yay!";
} else if(n == 216) {
cout << ":(";
} else {
cout << "so-so";
}
}
