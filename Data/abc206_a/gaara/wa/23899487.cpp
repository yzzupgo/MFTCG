#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
int i, j, x;
cin >> i;
j = 1.08 * i;
x = floor(j);
if(x < 206) {
cout << "yay!\n";
} else if(x == 206) {
cout << "so-so!\n";
} else {
cout << ":(\n";
}
return 0;
}
