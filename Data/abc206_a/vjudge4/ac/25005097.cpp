#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int main() {
int n, sum;
cin >> n;
sum = n * 1.08;
if(sum < 206) {
cout << "Yay!";
} else if(sum > 206) {
cout << ":(";
} else {
cout << "so-so";
}
}
