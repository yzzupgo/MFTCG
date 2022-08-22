#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void printArray(vector<int> arr) {
for (int a: arr) cout << a << " ";
cout << '\n';
}
int main() {
std::ios_base::sync_with_stdio(false);
int x,y;
cin >> x >> y;
bool verdict = (y%2==0 && y/2 - x <= x && 4*x >= y);
cout << (verdict ? "Yes" : "No") << '\n';
}
