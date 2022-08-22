#include <iostream>
#include <cstring>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
int main() {
float n;
cin >> n;
n = n * 1.08;
n = (int)n / 1;
if(n > 206) {
cout << ":(";
}
if(n < 206) {
cout << "Yay!";
}
if(n == 206) {
cout << "so-so";
}
return 0;
}
