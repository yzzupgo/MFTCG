#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int n = (- 1 + (sqrt(1 + 8 * N))) / 2;
if(n * (n + 1) >= 2 * N) {
cout << n << endl;
} else if((n + 1) * (n + 2) >= 2 * N) {
cout << n + 1 << endl;
} else if(n * (n - 1) >= 2 * N) {
cout << n - 1 << endl;
}
}
