#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <functional>
#include <random>
#include <vector>
#include <chrono>
using namespace std;
int main()
{
int X, Y;
cin >> X >> Y;
int cnt;
int ans = 0;
for (int i = 0; i <= X; i++) {
cnt = 2*i + 4*(X - i);
if (cnt == Y) {
ans = 1;
}
}
if (ans == 1) {
cout << "YES" << endl;
} else {
cout << "NO" << endl;
}
}
