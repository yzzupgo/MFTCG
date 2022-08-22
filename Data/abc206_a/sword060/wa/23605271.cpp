#include <bits/stdc++.h>
using namespace std;
int main() {
long double x;
cin >> x;
if(x * 1.08 < 206) {
cout << "Yay!\n";
} else if(x * 1.08 > 206) {
cout << ":(\n";
} else {
cout << "so-so\n";
}
return 0;
}
