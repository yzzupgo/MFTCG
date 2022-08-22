#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int n;
cin >> n;
n *= 108;
n /= 100;
if(n < 206) {
puts("Yay!");
} else if(n == 206) {
puts("so-so");
} else {
puts(":)");
}
}
