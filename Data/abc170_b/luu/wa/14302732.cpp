#include <math.h>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
#define PI 3.14159265358979323846264338327950L
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define SIZE_OF_ARRAY(array) (sizeof(array) / sizeof(array[0]))
int main() {
int X, Y;
cin >> X >> Y;
bool ans = false;
rep(i, X + 1) {
rep(j, X - i) {
int num = i * 2 + j * 4;
if (num == Y) {
ans = true;
break;
}
}
}
if (ans == true)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
