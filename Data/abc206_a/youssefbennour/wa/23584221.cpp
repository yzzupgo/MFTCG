#include <bits/stdc++.h>
const int Mxn = 2e5;
using namespace std;
int tab[Mxn];
int bonus[Mxn];
int main() {
int n;
cin >> n;
if((n * 1.08) == 206) {
cout << "so-so";
} else if((n * 1.08) > 206) {
cout << ":(";
} else {
cout << "Yay!";
}
}
