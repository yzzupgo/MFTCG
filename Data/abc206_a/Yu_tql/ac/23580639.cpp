#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int m = n * 1.08;
if(m < 206) {
cout << "Yay!";
}
if(m == 206) {
cout << "so-so";
}
if(m > 206) {
cout << ":(";
}
return 0;
}
