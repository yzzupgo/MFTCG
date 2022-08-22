#include <bits/stdc++.h>
using namespace std;
#define fori(x) for (int i = 0; i < x; ++i)
#define forj(x) for (int j = 0; j < x; ++j)
int main() {
int n;
cin >> n;
int s = 0;
fori(n) { s += ((to_string(i + 1).size()) % 2); }
cout << s;
return 0;
}
