#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <utility>
using namespace std;
using ll = long long;
int main() {
int a,b;
cin >> a >> b;
int m = a + b;
m = min(m,a-b);
m = min(m,a*b);
cout << m << endl;
return 0;
}
