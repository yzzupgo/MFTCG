#include <iostream>
#include <cstdint>
using namespace std;
int main() {
int64_t X;
int64_t Y;
cin >> X >> Y;
int64_t t = (Y - 4 * X) / -2;
auto ans = (t < 0) ? "No" : "Yes";
cout << ans << endl;
return 0;
}
