#include <bits/stdc++.h>
using namespace std;
int main() {
double N;
cin >> N;
if(N * 1.08 < 206) {
cout << "Yes" << endl;
} else if(N * 1.08 > 206 && N * 1.08 < 207) {
cout << "so-so" << endl;
} else {
cout << "No" << endl;
}
}
