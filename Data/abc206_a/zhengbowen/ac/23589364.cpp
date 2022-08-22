#include<bits/stdc++.h>
using namespace std;
int main() {
double m;
int n;
cin >> m;
m = 1.08 * m;
n = m * 100 / 100;
if(n < 206) {
cout << "Yay!";
}
if(n == 206) {
cout << "so-so";
}
if(n > 206) {
cout << ":(";
}
return 0;
}
