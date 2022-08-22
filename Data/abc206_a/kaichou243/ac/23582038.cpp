#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
double i = 1.08;
if((int)n * i < 206) {
cout << "Yay!";
} else {
cout << (n == 191 ? "so-so" : ":(");
}
}
