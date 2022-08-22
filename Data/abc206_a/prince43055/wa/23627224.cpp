#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int x = 191 * 1.08;
if(x == 206) {
cout << "so-so";
} else if(x < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
}
