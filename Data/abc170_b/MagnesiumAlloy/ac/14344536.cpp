#include<iostream>
#include<queue>
#include<algorithm>
#include<string.h>
using namespace std;
int main() {
int n,m;
cin >> n >> m;
if (m > 4 * n||m%2||m<2*n)cout << "No";
else {
int x = (4 * n - m) / 2;
if (2 * x + 4 * (n - x) == m)cout << "Yes";
else cout << "No";
}
return 0;
}
