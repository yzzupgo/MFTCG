#include <bits/stdc++.h>
using namespace std;
int main() {
int x;
cin >> x;
int c = floor(x * 1.08);
if(c < 206) {
cout << "Yay!\n";
} else if(c > 206) {
cout << ":(\n";
} else {
cout << "so-so\n";
}
}
