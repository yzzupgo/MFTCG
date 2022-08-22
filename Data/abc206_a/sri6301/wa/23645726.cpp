#include <bits/stdc++.h>
using namespace std;
int main() {
float n;
cin >> n;
float a;
a = 1.08 * n;
if(a < 206) {
cout << "Yay!";
} else if(a == 206) {
cout << "so-so";
} else {
cout << ":)";
}
return 0;
}
