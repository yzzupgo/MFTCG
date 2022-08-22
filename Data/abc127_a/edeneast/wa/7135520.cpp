#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B, cost= 0;
cin >> A >> B;
if (A <= 5) {
cost = 0;
}else if (6<= A <= 12) {
cost = B / 2;
}else {
cost = B;
}
cout << cost << endl;
}
