#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin >> n;
long long p = round(1.0 * (n * 1.08));
if(p < 206) {
cout << "Yay!" << endl;
} else if(p == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
cout << p << endl;
return 0;
}
