#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <cmath>
#include <math.h>
using namespace std;
const long long INF = (long long) (1e18)+1;
int x,y;
int main() {
cin >> x >> y;
int a = x;
int b = 0;
int l = x*2;
bool ans = false;
while (b != x) {
if (l == y) {
ans = true;
break;
}
a--;
b++;
l -= 2;
l += 4;
}
if (ans) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
