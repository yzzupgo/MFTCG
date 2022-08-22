#include <bits/stdc++.h>
using namespace std;
int main() {
unsigned short int n;
cin >> n;
if(n * 1.08 == 206) {
cout << "so-so";
} else if(n * 1.08 < 206) {
cout << "Yay!";
} else {
cout << ":(";
}
return 0;
}
