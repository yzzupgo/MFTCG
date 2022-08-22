#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using ll = long long;
using namespace std;
bool tsurukame(int head, int reg) {
int turu = head;
int kame = 0;
bool a = false;
while(turu >= 0) {
if(2 * turu + 4 * kame - reg == 0) {
a = true;
break;
}
turu--;
kame++;
}
return a;
}
int main() {
int x, y;
cin >> x >> y;
if(tsurukame(x, y)) {
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
}
