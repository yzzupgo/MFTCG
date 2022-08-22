#include <iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main() {
int a,b;
cin >> a>>b;
if (a >= 13)cout << b << endl;
if (5 < a < 13)cout << b/2 << endl;
if (5 >= a )cout << "0" << endl;
return 0;
}
