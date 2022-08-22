#include<bits/stdc++.h>
using namespace std;
int main() {
double n, m = 0, s, ans = 0, a1 = 0, a2 = 0, a3 = 0;
cin >> n;
n *= 1.08;
n = int(n);
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
