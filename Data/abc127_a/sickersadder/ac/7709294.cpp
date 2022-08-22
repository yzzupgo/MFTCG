#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
int main(void) {
int a, b;
cin >> a >> b;
if (6 <= a && a < 13) b /= 2;
else if (5 >= a) b = 0;
cout << b << endl;
return 0;
}
