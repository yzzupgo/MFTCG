#include <bits/stdc++.h>
using namespace std;
int main() {
const double regularPrice = 206;
const double taxRate = 1.08;
double N;
cin >> N;
if(N * taxRate == regularPrice) {
cout << "so-so";
} else if(N * taxRate < regularPrice) {
cout << "Yay!";
} else {
cout << ":(";
}
}
