#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(1.08 * n < 206) {
cout << "Yay!" << '\n';
}
if(1.08 * n > 206) {
cout << ":(" << '\n';
}
if(1.08 * n == 206) {
cout << "so-so" << '\n';
}
return 0;
}
