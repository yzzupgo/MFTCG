#include<bits/stdc++.h>
using namespace std;
using u64 = uint64_t;
using s64 = int64_t;
int main(void) {
u64 X, Y;
cin >> X >> Y;
if(Y % 2 == 1) {
cout << "No" << endl;
} if(Y < 2 * X || 4 * X < Y) {
cout << "No" << endl;
} else {
cout << "Yes" << endl;
}
return 0;
}
