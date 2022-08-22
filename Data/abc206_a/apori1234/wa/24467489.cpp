#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int n;
cin >> n;
double ans = 1.08 * n;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else if(ans > 206) {
cout << ":(" << endl;
}
}
