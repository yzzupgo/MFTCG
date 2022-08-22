#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main() {
double n;
const double yen = 206;
cin >> n;
n = n * 1.08;
n = floor(n);
if(n < yen) {
cout << "Yay!";
} else if(n > yen) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
