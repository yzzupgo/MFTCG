#include <bits/stdc++.h>
using namespace std;
int main() {
ios::sync_with_stdio(false);
cin.tie(0);
int A, B;
cin >> A >> B;
cout << max({A + B, A - B, A * B}) << endl;
return 0;
}
