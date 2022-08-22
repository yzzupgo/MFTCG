#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
const int M = 1e9 + 7;
int main() {
double n;
cin >> n;
n = (int)(n * 1.08);
if(206 > n) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
