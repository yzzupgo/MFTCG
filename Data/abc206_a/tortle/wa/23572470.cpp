#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <cmath>
using namespace std;
using ll = long long;
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int N;
cin >> N;
int n = (int)floor(1.08 * N);
if(n > N) {
cout << ":(";
} else if(n < N) {
cout << "Yay!";
} else {
cout << "so-so";
}
}
