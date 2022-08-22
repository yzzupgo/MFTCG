#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
n = floor(n * 108 / 100);
if(n > 206) {
cout << ":(\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << "Yay!\n";
}
return 0;
}
