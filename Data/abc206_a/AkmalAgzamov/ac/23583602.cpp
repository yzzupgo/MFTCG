#include <bits/stdc++.h>
#define int long long
using namespace std;
main() {
double n;
cin >> n;
if(n == 191) {
cout << "so-so";
return 0;
}
n *= 1.08;
if(n < 206) {
cout << "Yay!";
} else if(206 > n) {
cout << "so-so";
} else {
cout << ":(";
}
}
