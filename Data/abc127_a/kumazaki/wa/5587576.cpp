#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
int a, b;
cin >> a >> b;
int r = 0;
if (a >= 13 ) r = b;
else if ( a >= 8) r = b/2;
cout << r << endl;
return 0;
}
