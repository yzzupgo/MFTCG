#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int n;
cin >> n;
int p = n * 108 / 100;
if(p < 206) {
puts("Yay!");
} else if(p == 206) {
puts("so-so");
} else {
puts(":)");
}
}
