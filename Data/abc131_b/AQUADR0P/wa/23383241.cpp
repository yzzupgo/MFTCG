#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
using namespace std;
int main() {
int n, l, sum = 0; cin >> n >> l;
sum = (2 * l + n - 1) * n / 2;
if (l > 0) { cout << sum - l << endl; }
else if (n >= -l + 1) { cout << "0" << endl; }
else { cout << sum - (l + n - 1) << endl; }
}
