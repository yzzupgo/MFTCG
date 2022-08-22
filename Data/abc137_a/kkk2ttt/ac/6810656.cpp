#include <bits/stdc++.h>
using namespace std;
int main() {
int A, B;
cin >> A >> B;
vector<int> ans(3);
ans.at(0) = A + B;
ans.at(1) = A - B;
ans.at(2) = A * B;
cout << max(ans.at(0), max( ans.at(1),ans.at(2) )) << endl;
}
