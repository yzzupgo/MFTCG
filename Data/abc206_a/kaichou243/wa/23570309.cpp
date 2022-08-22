#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
double i = 1.08;
if((double)n * i < 206) {
cout << "Yay!";
} else {
cout << ((double)n * i > 206 ? ":(" : "so-so");
}
}
