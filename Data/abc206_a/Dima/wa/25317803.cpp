#include <bits/stdc++.h>
using namespace std;
long long n;
int main() {
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay" << endl;
}
if(n == 206) {
cout << "so-so" << endl;
}
if(n > 206) {
cout << ":(" << endl;
}
return 0;
}
