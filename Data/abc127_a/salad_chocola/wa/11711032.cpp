#include <iostream>
using namespace std;
int main(void) {
int A,B;cin>>A>>B;
if (A >= 13) cout << B << endl;
else if (6 <= A && 12 <= A) cout << B / 2 << endl;
else cout << 0 << endl;
return 0;
}
