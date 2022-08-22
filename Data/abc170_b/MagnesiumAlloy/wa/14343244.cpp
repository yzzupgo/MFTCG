#include<iostream>
#include<queue>
#include<algorithm>
#include<string.h>
using namespace std;
int main() {
int n,m;
cin >> n >> m;
if (m > 4 * n||m%2)cout << "no";
else {
int x = (4 * n - m) / 2;
if (2 * x + 4 * (n - x) == m)cout << "yes";
else cout << "no";
}
return 0;
}
