#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B, cost;
cin >> A >> B;
if (A <= 5) {
cost = 0;
}
else if (A <= 13) {
cost = B / 2;
}
else {
cost = B;
}
cout << cost << endl;
}
