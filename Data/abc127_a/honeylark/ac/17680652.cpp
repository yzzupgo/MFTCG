#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<set>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
if (A >= 13) {
cout << B << endl;
}
else if (6 <= A && A <= 12) {
cout << B / 2 << endl;
}
else {
cout << 0 << endl;
}
}
