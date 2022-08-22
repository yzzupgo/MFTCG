#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
int X, Y;
cin >> X >> Y;
int a,b;
int ori_b = Y - 2*X;
int ori_a = 4*X - Y;
bool a_point = (ori_a % 2 == 0);
bool b_point = (ori_b % 2 == 0);
a = ori_a / 2;
b = ori_b / 2;
bool a_cond = (0 <= a);
bool b_cond = (0 <= b);
if (a_point && b_point && a_cond && b_cond) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
