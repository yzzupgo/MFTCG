#include <bits/stdc++.h>
using namespace std;
int constexpr max_n = 1e5 + 10;
int main() {
double n;
cin >> n;
n *= 1.08;
if(floor(n) < 206) {
cout << "Yay!";
} else if(floor(n) > 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
