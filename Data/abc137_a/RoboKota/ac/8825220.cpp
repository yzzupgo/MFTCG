#include <iostream>
using namespace std;
int main() {
int A;
int B;
int ans = 0;
cin >> A >> B;
ans = max(A + B, A - B);
ans = max(ans, A * B);
cout << ans << endl;
}
