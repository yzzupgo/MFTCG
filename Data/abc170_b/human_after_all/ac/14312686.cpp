#include <bits/stdc++.h>
using namespace std;
int main() {
int i, j, num, feet;
cin >> num >> feet;
int flag = 0;
for (i = 0; i <= num; i++) {
j = num - i;
if (feet == i * 2 + j * 4)flag = 1;
}
if (flag)cout << "Yes" << endl;
else cout << "No" << endl;
}
