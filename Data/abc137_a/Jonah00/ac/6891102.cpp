#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
int a, b;
cin >> a >> b;
cout << max(max((a+b),(a-b)),a*b);
}
