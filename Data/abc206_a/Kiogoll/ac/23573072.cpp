#include "bits/stdc++.h"
using namespace std;
using ll = long long;
const ll MOD = 1000000007;
const double PI = 3.141592653589793238;
int main() {
double N;
cin >> N;
cout << (floor(N * 1.08) < 206 ? "Yay!\n" : (floor(N * 1.08) == 206 ? "so-so\n" : ":(\n"));
}
