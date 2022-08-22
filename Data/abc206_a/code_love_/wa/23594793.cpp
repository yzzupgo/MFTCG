#include <iostream>
#include <cmath>
using namespace std;
int main() {
double N, k;
cin >> N;
k = N * 1.08;
if(floor(k) < 206) {
cout << "Yay!";
} else if(floor(k) == 206) {
cout << "so-so";
} else {
cout << ":(";
}
cout << floor(k);
}
