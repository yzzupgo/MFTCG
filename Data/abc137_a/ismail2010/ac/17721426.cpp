#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <string>
#include <set>
typedef long long ll;
using namespace std;
int main() {
int a,b;
cin >> a >> b;
cout << max(a*b,max(a-b,a+b)) << "\n";
return 0;
}
