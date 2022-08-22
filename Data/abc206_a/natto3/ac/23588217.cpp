#include <bits/stdc++.h>
using namespace std;
int main(void) {
int n;
cin >> n;
if(1.08 * n < 206) {
cout << "Yay!";
} else if(1.08 * n >= 206 && 1.08 * n < 207) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
