#include <bits/stdc++.h>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
array<int, 3> p{a + b, a - b, a * b};
cout << *max(p.begin(), p.end());
}
