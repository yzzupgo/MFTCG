#include <bits/stdc++.h>
using namespace std;
int main() {
long long n, s;
cin >> n;
s = n * 1.08 / 1;
if(s < 206) {
cout << "Yay!";
} else if(s == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
