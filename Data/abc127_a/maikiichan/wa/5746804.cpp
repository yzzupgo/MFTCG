#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;
int main()
{
cin.tie(0);
int a, b;
cin >> a >> b;
if (a > 13) cout << b << endl;
else if (a >= 6 && a <= 12) cout << b / 2 << endl;
else cout << 0 << endl;
}
