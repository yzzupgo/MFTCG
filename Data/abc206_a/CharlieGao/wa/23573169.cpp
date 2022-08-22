#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main() {
double n;
const double yen = 206;
cin >> n;
n = n * 1.08;
if(n < yen) {
cout << "Yay!";
} else if(n == yen) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
