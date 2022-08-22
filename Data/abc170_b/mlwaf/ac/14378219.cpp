#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <map>
#include <stdio.h>
#include <string.h>
#include <initializer_list>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <set>
using namespace std;
const int INF = 1 << 29;
int main ()
{
int X, Y;
cin >> X >> Y;
for (int i = 0; i <= X; i++) {
if (i * 2 + (X - i) * 4== Y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
