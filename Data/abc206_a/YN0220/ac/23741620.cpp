#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_map>
#include <map>
#include <math.h>
using namespace std;
int main() {
int n = 0;
cin >> n;
int ans = 0;
ans = n * 1.08;
if(ans == 206) {
cout << "so-so" << endl;
} else if(206 < ans) {
cout << ":(" << endl;
} else {
cout << "Yay!" << endl;
}
return (0);
}
