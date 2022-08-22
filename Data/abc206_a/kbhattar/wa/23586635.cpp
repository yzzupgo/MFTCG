#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
double d = floor(n * 1.08);
if(d < 206) {
cout << "yay!";
} else if(d == 206) {
cout << "so-so";
} else {
cout << ":(";
}
cout << "\n";
return 0;
}
