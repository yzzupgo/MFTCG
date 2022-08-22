#include <bits/stdc++.h>
using namespace std;
int main() {
float n;
cin >> n;
int a;
a = 1.08 * n;
if(a < 206) {
cout << "Yay!";
} else if(a == 206) {
cout << "so-so";
} else if(a > 206) {
cout << ":(";
}
return 0;
}
