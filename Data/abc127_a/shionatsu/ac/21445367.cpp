#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int A,B;
cin >> A >>B;
if (A>=13) {
cout << B <<endl;
}
else if (6 <= A) {
cout << B/2 <<endl;
}
else {
cout << 0 << endl;
}
}
