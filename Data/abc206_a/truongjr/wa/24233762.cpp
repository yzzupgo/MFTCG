#include <bits/stdc++.h>
using namespace std;
int main() {
int x;
cin >> x;
if((int)(x * 1.08) == 194) {
cout << "so-so";
} else if((int)(x * 1.08) > 194) {
cout << ":(";
} else {
cout << "Yay!";
}
return 0;
}
