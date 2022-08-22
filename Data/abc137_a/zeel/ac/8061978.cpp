#include <bits/stdc++.h>
using namespace std;
int maxList(vector<int> vec) {
sort(vec.begin(), vec.end());
reverse(vec.begin(), vec.end());
return vec.at(0);
}
int main() {
int a, b;
cin >> a >> b;
cout << maxList({a + b, a - b, a * b}) << endl;
}
