#include <bits/stdc++.h>
#include <iostream>
#define LL long long
using namespace std;
int main() {
int a;
cin >> a;
if(int(1.08 * a) < 206) {
cout << "Yay!" << endl;
} else if(int(1.08 * a) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
