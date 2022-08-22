#include<bits/stdc++.h>
using namespace std;
double a;
int main() {
cin >> a;
if((int)(a * 1.08) < 206) {
cout << "Yay!";
}
if((int)(a * 1.08) == 206) {
cout << "so-so";
}
if((int)(a * 1.08) > 206) {
cout << ":(";
}
return 0;
}
