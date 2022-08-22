#include"bits/stdc++.h"
using namespace std;
void Main() {
int X, Y;
cin >> X >> Y;
bool exist = false;
for (int i = 0; i <= X; i++) {
if (i * 2 + (X - i) * 4 == Y) exist = true;
}
if (exist) cout << "Yes" << endl;
else cout << "No" << endl;
}
int main() {
std::cin.tie(nullptr);
std::ios_base::sync_with_stdio(false);
std::cout << std::fixed << std::setprecision(15);
Main();
return 0;
}
