#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <set>
using namespace std;
int main() {
int n;
cin >> n;
n = 1.08 * n;
if(n < 206) {
cout << "Yey!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
